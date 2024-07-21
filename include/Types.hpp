#pragma once

#ifndef SYLVER_TYPES
#define SYLVER_TYPES

namespace Sylver{
    typedef unsigned char U8;
    typedef unsigned short U16;
    typedef unsigned long U32;
    typedef unsigned long long U64;

    typedef char S8;
    typedef short S16;
    typedef long S32;
    typedef long long S64;

    typedef float F32;
    typedef double F64;

    typedef unsigned char Bool;
    
    namespace Math{
        static const F64 PI = 3.141592653589793238462643383279502884197169;
        static const F64 E = 2.7182818284590452353602874713526624977572470;
    }
}
#endif
