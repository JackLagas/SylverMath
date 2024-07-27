#include "Trig.hpp"

#include <cmath>

namespace Sylver::Math {
    BASE_TYPE Sin(const BASE_TYPE& rad){
        return sin(rad);
    }
    BASE_TYPE Cos(const BASE_TYPE& rad){
        return cos(rad);
    }
    BASE_TYPE Tan(const BASE_TYPE& rad){
        return tan(rad);
    }
    BASE_TYPE Csc(const BASE_TYPE& rad){
        return 1.0 / sin(rad);
    }
    BASE_TYPE Sec(const BASE_TYPE& rad){
        return 1.0 / cos(rad);
    }
    BASE_TYPE Cot(const BASE_TYPE& rad){
       return 1.0 / tan(rad); 
    }

    BASE_TYPE Arcsin(const BASE_TYPE& rad){
        return asin(rad);
    }
    BASE_TYPE Arccos(const BASE_TYPE& rad){
        return acos(rad);
    }
    BASE_TYPE Arctan(const BASE_TYPE& rad){
        return atan(rad);
    }
    BASE_TYPE Arccsc(const BASE_TYPE& rad){
        return asin(1.0 / rad);
    }
    BASE_TYPE Arcsec(const BASE_TYPE& rad){
        return acos(1.0 / rad);
    }
    BASE_TYPE Arccot(const BASE_TYPE& rad){
        return atan(1.0 / rad);
    }

    BASE_TYPE Sinh(const BASE_TYPE& rad){
        return sinh(rad);
    }
    BASE_TYPE Cosh(const BASE_TYPE& rad){
        return cosh(rad);
    }
    BASE_TYPE Tanh(const BASE_TYPE& rad){
        return tanh(rad);
    }
    BASE_TYPE Csch(const BASE_TYPE& rad){
        return 1.0 / sinh(rad);
    }
    BASE_TYPE Sech(const BASE_TYPE& rad){
        return 1.0 / cosh(rad);
    }
    BASE_TYPE Coth(const BASE_TYPE& rad){
        return 1.0 / tanh(rad);
    }

    BASE_TYPE Arcsinh(const BASE_TYPE& rad){
        return asinh(rad);
    }
    BASE_TYPE Arccosh(const BASE_TYPE& rad){
        return acosh(rad);
    }
    BASE_TYPE Arctanh(const BASE_TYPE& rad){
        return atanh(rad);
    }
    BASE_TYPE Arccsch(const BASE_TYPE& rad){
        return asinh(1.0 / rad);
    }
    BASE_TYPE Arcsech(const BASE_TYPE& rad){
        return acosh(1.0 / rad);
    }
    BASE_TYPE Arccoth(const BASE_TYPE& rad){
        return atanh(1.0 / rad);
    }
}
