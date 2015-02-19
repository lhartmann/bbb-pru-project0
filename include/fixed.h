#ifndef FIXED_H
#define FIXED_H
#include <stdint.h>

template <unsigned q> struct fixed32;
template <unsigned q> struct fixed64;

template <unsigned q> struct fixed64 {
    int64_t val;
    fixed64(int64_t v=0) : val(v) {}
    template <unsigned qr> fixed64(const fixed64<qr> &r);
    template <unsigned qr> fixed64(const fixed32<qr> &r);
    int64_t int_part() const {
        return val >> q;
    }
    uint64_t frac_part() const {
        return val << (32-q);
    }
};

template <unsigned q> struct fixed32 {
    int32_t val;
    fixed32(int32_t v=0) : val(v) {}
    template <unsigned qr> fixed32(const fixed32<qr> &r);
    template <unsigned qr> fixed32(const fixed64<qr> &r);

    fixed32(double d=0) : val(d * (1<<q) + 0.5) {}
    double to_double() const {
        return double(val) / (1<<q);
    }

    int32_t int_part() const {
        return val >> q;
    }
    uint32_t frac_part() const {
        return val << (32-q);
    }

    template <unsigned qr> fixed32 &operator=(const fixed32<qr> &r);
    template <unsigned qr> fixed32 &operator=(const fixed64<qr> &r);
    template <unsigned qr> fixed32< (q>qr)?q:qr > operator+(const fixed32<qr> &r) const;
    template <unsigned qr> fixed32< (q>qr)?q:qr > operator-(const fixed32<qr> &r) const;
    template <unsigned qr> fixed64<q+qr> operator*(const fixed32<qr> &r) const;
    template <unsigned qr> fixed64<q+32-qr> operator/(const fixed32<qr> &r) const;
};

// Fixed64 methods
template<unsigned q> template<unsigned qr>
fixed64<q>::fixed64(const fixed64<qr> &r) {
    if (q > qr) val = r.val << (q-qr);
    else        val = r.val >> (qr-q);
}

template<unsigned q> template <unsigned qr>
fixed64<q>::fixed64(const fixed32<qr> &r) {
    if (q > qr) val = r.val << (q-qr);
    else        val = r.val >> (qr-q);
}

// Fixed32 methods
template<unsigned q> template <unsigned qr>
fixed32<q>::fixed32(const fixed32<qr> &r) {
    if (q > qr) val = r.val << (q-qr);
    else        val = r.val >> (qr-q);
}

template<unsigned q> template <unsigned qr>
fixed32<q>::fixed32(const fixed64<qr> &r) {
    if (q > qr) val = r.val << (q-qr);
    else        val = r.val >> (qr-q);
}

template<unsigned q> template <unsigned qr>
fixed32<q> &fixed32<q>::operator=(const fixed32<qr> &r) {
    if (q > qr) val = r.val << (q-qr);
    else        val = r.val >> (qr-q);
}

template<unsigned q> template <unsigned qr>
fixed32<q> &fixed32<q>::operator=(const fixed64<qr> &r) {
    if (q > qr) val = r.val << (q-qr);
    else        val = r.val >> (qr-q);
}

template<unsigned q> template<unsigned qr>
fixed32< (q>qr)?q:qr > fixed32<q>::operator+(const fixed32<qr> &r) const {
    return fixed32<(q>qr)?q:qr>(
        fixed32<(q>qr)?q:qr>( *this ).val +
        fixed32<(q>qr)?q:qr>( r ).val
    );
}

template<unsigned q> template<unsigned qr>
fixed32< (q>qr)?q:qr > fixed32<q>::operator-(const fixed32<qr> &r) const {
    return fixed32<(q>qr)?q:qr>(
        fixed32<(q>qr)?q:qr>( *this ).val -
        fixed32<(q>qr)?q:qr>( r ).val
    );
}

template<unsigned q> template <unsigned qr>
fixed64<q+qr> fixed32<q>::operator*(const fixed32<qr> &r) const {
    return fixed64<q+qr>(int64_t(val)*r.val);
}

template <unsigned q> template <unsigned qr>
fixed64<q+32-qr> fixed32<q>::operator/(const fixed32<qr> &r) const {
    // Q(X+32-Y) = Q(X+32) / Q(Y)
    return fixed64<q+32-qr>((int64_t(val)<<32)/r.val);
}

#endif // FIXED_H
