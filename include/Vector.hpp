#pragma once

#include "Types.hpp"
#include <ostream>


namespace Sylver::Math{

    struct Vector2;
    struct Vector3;
    struct Vector4;

    typedef Vector2 Vec2;
    typedef Vector3 Vec3;
    typedef Vector4 Vec4;

    struct Vector2{
        union{ F64 x, r, s; };
        union{ F64 y, g, t; };

        static const U32 SIZE = 2;

        Vector2();
        Vector2(const Vector2& vec);
        Vector2(const F64& x1, const F64& y1);

        Vector2(const Vector3& vec);
        Vector2(const Vector4& vec);


        F64 operator[](const U32& index);
        const F64 operator[](const U32& index) const ;


        Vector2 operator=(const Vector2& vec);

        Vector2 operator+(const Vector2& vec);
        Vector2 operator+=(const Vector2& vec);
        Vector2 operator-(const Vector2& vec);
        Vector2 operator-=(const Vector2& vec);
        Vector2 operator*(const F64& scalar);
        Vector2 operator*=(const F64& scalar);
        F64 operator*(const Vector2& vec);
        Vector2 operator/(const F64& scalar);
        Vector2 operator/=(const F64& scalar);


        Bool operator==(const Vector2& vec) const;
    };
    std::ostream& operator<<(std::ostream& stream, const Vector2& vec);
    Vector2 operator*(const F64& scalar, const Vector2& vec);
    Vector2 operator*=(const F64& scalar, Vector2& vec);

    struct Vector3{
        union{ F64 x, r, s; };
        union{ F64 y, g, t; };
        union{ F64 z, b, u; };

        static const U32 SIZE = 3;

        Vector3();
        Vector3(const Vector3& vec);
        Vector3(const Vector2& vec, const F64& z1);
        Vector3(const F64& x1, const Vector2& vec);
        Vector3(const F64& x1, const F64& y1, const F64& z1);

        Vector3(const Vector2& vec);
        Vector3(const Vector4& vec);

        F64 operator[](const U32& index);
        const F64 operator[](const U32& index) const ;

        Vector3 operator=(const Vector3& vec);

        Vector3 operator+(const Vector3& vec);
        Vector3 operator+=(const Vector3& vec);
        Vector3 operator-(const Vector3& vec);
        Vector3 operator-=(const Vector3& vec);
        Vector3 operator*(const F64& scalar);
        Vector3 operator*=(const F64& scalar);
        F64 operator*(const Vector3& vec);
        Vector3 operator/(const F64& scalar);
        Vector3 operator/=(const F64& scalar);

        Bool operator==(const Vector3& vec) const;
    };
    std::ostream& operator<<(std::ostream& stream, const Vector3& vec);
    Vector3 operator*(const F64& scalar, const Vector3& vec);
    Vector3 operator*=(const F64& scalar, const Vector3& vec);
    
    struct Vector4{
        union{ F64 x, r, s; };
        union{ F64 y, g, t; };
        union{ F64 z, b, p; };
        union{ F64 w, a, q; };

        static const U32 SIZE = 4;

        Vector4();
        Vector4(const Vector4& vec);
        Vector4(const Vector3& vec, const F64& w1);
        Vector4(const F64& x1, const Vector3& vec);
        Vector4(const Vector2& vec, const F64& z1, const F64& w1);
        Vector4(const F64& x1, const Vector2& vec, const F64& w1);
        Vector4(const F64& x1, const F64& y1, const Vector2& vec);
        Vector4(const F64& x1, const F64& y1, const F64& z1, const F64& w1);

        Vector4(const Vector2& vec);
        Vector4(const Vector3& vec);

        F64 operator[](const U32& index);
        const F64 operator[](const U32& index) const ;

        Vector4 operator=(const Vector4& vec);

        Vector4 operator+(const Vector4& vec);
        Vector4 operator+=(const Vector4& vec);
        Vector4 operator-(const Vector4& vec);
        Vector4 operator-=(const Vector4& vec);
        Vector4 operator*(const F64& scalar);
        Vector4 operator*=(const F64& scalar);
        F64 operator*(const Vector4& vec);
        Vector4 operator/(const F64& scalar);
        Vector4 operator/=(const F64& scalar);

        Bool operator==(const Vector4& vec) const;
    };
    std::ostream& operator<<(std::ostream& stream, const Vector4& vec);
    Vector4 operator*(const F64& scalar, const Vector4& vec);
    Vector4 operator*=(const F64& scalar, const Vector4& vec);

}
