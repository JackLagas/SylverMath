#pragma once

#include "Types.hpp"

namespace Sylver::Math{
    BASE_TYPE Sqrt(const BASE_TYPE& input);
    BASE_TYPE InverseSqrt(const BASE_TYPE& input);
    BASE_TYPE Exp(const BASE_TYPE& power);
    BASE_TYPE Power(const BASE_TYPE& base, const F64& power);
    BASE_TYPE Log(const BASE_TYPE& input);
    BASE_TYPE Ln(const BASE_TYPE& input);
}
