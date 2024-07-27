#include "Exponents.hpp"

#include <cmath>

namespace Sylver::Math{
    BASE_TYPE Sqrt(const BASE_TYPE& input){
        return sqrt(input);
    }
    BASE_TYPE InverseSqrt(const BASE_TYPE& input){
        return 1.0 / sqrt(input);
    }
    BASE_TYPE Exp(const BASE_TYPE& power){
        return exp(power);
    }
    BASE_TYPE Power(const BASE_TYPE& base, const F64& power){
        return pow(base, power);
    }
    BASE_TYPE Log(const BASE_TYPE& input){
        return log10(input);
    }
    BASE_TYPE Ln(const BASE_TYPE& input){
        return log(input);
    }
}

