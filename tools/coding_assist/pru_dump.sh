#! /bin/bash
DESC="$(
	cpp pru.h \
	| sed -r 's/\{/{\n/g;s/;/;\n/g' \
	| sed -rn '
		s/.*(struct|union) +([a-zA-Z0-9_]+) .*/SS \2/p;
		s/.*(struct|union) \{.*/SS/p;
		s/.*unsigned ([a-zA-Z0-9_]+) :.*/BF \1/p;
		s/.*[a-zA-Z0-9_]+ +([a-zA-Z0-9_]+);.*/BF \1/p;
		s/.*uint32_t +([a-zA-Z0-9_]+)[ \t]*\[([0-9]+)\];.*/VU \1 \2/p;
		s/.*} ([a-zA-Z0-9_]+);/ES \1/p;
		s/.*}.*/ES/p'
)"

# echo "$DESC"
# exit

DEPTH=0
FIELDS=""

cat <<EOF
#define pru_dump(out,Y,n)  { pru_indent(out,n); (out) << #Y " = "; pru_dump_val(out,Y,n); }
#define pru_dumpX(out,Y,n) { pru_indent(out,n); (out) << #Y " = "; pru_dump_val(out,X.Y,n); }

inline void pru_indent(ostream &out, uint32_t n) { while (n--) out<<"  "; }
inline void pru_dump_val(ostream &out, uint32_t Y, uint32_t n) { out << hex << (Y) <<endl; }

EOF

echo "$DESC" | while read CMD PARAM PARAM2; do
	echo "// -${CMD}-${PARAM}-"
	case "$CMD" in
	"SS")
		((DEPTH++))
		NAME[$DEPTH]="$PARAM"
		FIELDS[$DEPTH]=""
		;;
		
	"BF")
		if echo "$PARAM" | grep -qi rsvd; then
			continue;
		fi
		FIELDS[$DEPTH]="${FIELDS[$DEPTH]} $PARAM"
		;;
		
	"VU")
		for ((i=0; i < (PARAM2); ++i)); do
			FIELDS[$DEPTH]="${FIELDS[$DEPTH]} ${PARAM}[$i]"
		done
		;;
	
	"ES")
		if ((DEPTH == 0)); then
			continue
		fi
		if [ -n "${NAME[$DEPTH]}" ]; then
			echo "inline void pru_dump_val(ostream &out, const ${NAME[$DEPTH]} &X, uint32_t n) {"
			echo -e "\tout << \"{\" << endl;"
			for i in ${FIELDS[$DEPTH]}; do
				echo -e "\tpru_dumpX(out, $i, n+1);"
			done
			echo -e "\tpru_indent(out, n);";
			echo -e "\tout << \"}\" << endl;"
			echo "}"
			echo ""
			FIELDS=""
			NAME="K"
		elif [ -n "$PARAM" ]; then
			D=$((DEPTH-1))
			for i in ${FIELDS[$DEPTH]}; do
				FIELDS[$D]="${FIELDS[$D]} $PARAM.$i"
			done
		else
			# do nada
			echo ""
		fi
		((DEPTH--))
		;;
		
	esac
done

