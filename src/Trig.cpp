#include "Trig.hpp"

#include <cmath>

namespace Sylver::Math {
    F64 Sin(const F64& rad){
        return sin(rad);
    }
    F64 Cos(const F64& rad){
        return cos(rad);
    }
    F64 Tan(const F64& rad){
        return tan(rad);
    }
    F64 Csc(const F64& rad){
        return 1.0 / sin(rad);
    }
    F64 Sec(const F64& rad){
        return 1.0 / cos(rad);
    }
    F64 Cot(const F64& rad){
       return 1.0 / tan(rad); 
    }

    F64 Arcsin(const F64& rad){
        return asin(rad);
    }
    F64 Arccos(const F64& rad){
        return acos(rad);
    }
    F64 Arctan(const F64& rad){
        return atan(rad);
    }
    F64 Arccsc(const F64& rad){
        return asin(1.0 / rad);
    }
    F64 Arcsec(const F64& rad){
        return acos(1.0 / rad);
    }
    F64 Arccot(const F64& rad){
        return atan(1.0 / rad);
    }

    F64 Sinh(const F64& rad){
        return sinh(rad);
    }
    F64 Cosh(const F64& rad){
        return cosh(rad);
    }
    F64 Tanh(const F64& rad){
        return tanh(rad);
    }
    F64 Csch(const F64& rad){
        return 1.0 / sinh(rad);
    }
    F64 Sech(const F64& rad){
        return 1.0 / cosh(rad);
    }
    F64 Coth(const F64& rad){
        return 1.0 / tanh(rad);
    }

    F64 Arcsinh(const F64& rad){
        return asinh(rad);
    }
    F64 Arccosh(const F64& rad){
        return acosh(rad);
    }
    F64 Arctanh(const F64& rad){
        return atanh(rad);
    }
    F64 Arccsch(const F64& rad){
        return asinh(1.0 / rad);
    }
    F64 Arcsech(const F64& rad){
        return acosh(1.0 / rad);
    }
    F64 Arccoth(const F64& rad){
        return atanh(1.0 / rad);
    }
}