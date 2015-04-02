#! /bin/sh

exec < pru_icss_intc_bitfields.h > pru_icss_bitfields_dump.h

cat <<EOF
// Generated automatically by aux/intc_dump_builder.sh
// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: may-2014 - Lucas Hartmann
// Licensed under GPLv3+

#ifndef LHARTMANN_PRU_ICSS_INTC_DUMP_H
#define LHARTMANN_PRU_ICSS_INTC_DUMP_H
EOF

REG=""
while read LINE; do
	R=$(echo "$LINE" | sed -rn 's/^union pru_icss_intc_(.*)_reg_t \{$/\1/p')
	B=$(echo "$LINE" | sed -rn 's/^unsigned (.*) : [0-9]+;/\1/p')
	N=$(echo "$LINE" | sed -rn 's/^unsigned .* : ([0-9]+);/\1/p')
	
	if [ -n "$R" ]; then
		REG="$R"
		continue
	fi
	
	if [ -n "$B" ]; then
		if echo "$B" | grep -q rsvd; then
			continue;
		fi
		if [ $N -ge 4 ]; then
			echo "\tout << \"$REG.$B = 0x\" << hex << intc.$REG.$B << endl;"
		else
			echo "\tout << \"$REG.$B = \" << hex << intc.$REG.$B << endl;"
		fi
	fi

done
