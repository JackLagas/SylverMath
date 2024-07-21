#include "Exponents.hpp"

#include <cmath>

namespace Sylver::Math{
    F64 Sqrt(const F64& input){
        return sqrt(input);
    }
    F64 InverseSqrt(const F64& input){
        return 1.0 / sqrt(input);
    }
    F64 Exp(const F64& power){
        return exp(power);
    }
    F64 Power(const F64& base, const F64& power){
        return pow(base, power);
    }
    F64 Log(const F64& input){
        return log10(input);
    }
    F64 Ln(const F64& input){
        return log(input);
    }
}

