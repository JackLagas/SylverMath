#pragma once

#include "Types.hpp"
#include <ostream>


namespace Sylver::Math{

    template<std::size_t L, typename T>
    struct Vector {
        T m_Data[L];
    };


    template<typename T = BASE_TYPE>
    using Vector2 = Vector<2, T>;
    template<typename T = BASE_TYPE>
    using Vector3 = Vector<3, T>;
    template<typename T = BASE_TYPE>
    using Vector4 = Vector<4, T>;

    using Vector2f = Vector<2, F32>;
    using Vector3f = Vector<3, F32>;
    using Vector4f = Vector<4, F32>;

    using Vector2d = Vector<2, F64>;
    using Vector3d = Vector<3, F64>;
    using Vector4d = Vector<4, F64>;

    template<typename T>
    struct Vector<2, T>{
        union {
            T m_Data[2];
            struct {
                union{ T x, r, s; };
                union{ T y, g, t; };
            };
        };

        static const U32 SIZE = 2;

        Vector();
        Vector(const Vector<2, T>& vec);
        Vector(const T& x1, const T& y1);
        Vector(const Vector<3, T>& vec);
        Vector(const Vector<4, T>& vec);


        T& operator[](const U32& index){ return m_Data[index]; }
        const T& operator[](const U32& index) const { return m_Data[index]; }

        T& At(U32 index) { return m_Data[index]; }


        Vector operator=(const Vector<2, T>& vec);

        Vector operator+(const Vector<2, T>& vec);
        Vector operator+=(const Vector<2, T>& vec);
        Vector operator-(const Vector<2, T>& vec);
        Vector operator-=(const Vector<2, T>& vec);
        Vector operator*(const T& scalar);
        Vector operator*=(const T& scalar);
        T operator*(const Vector<2, T>& vec);
        Vector operator/(const T& scalar);
        Vector operator/=(const T& scalar);


        Bool operator==(const Vector<2, T>& vec) const;
        Bool operator!=(const Vector<2, T>& vec) const { return !(operator==(vec)); }
    };
    std::ostream& operator<<(std::ostream& stream, const Vector2<BASE_TYPE>& vec);
    Vector2<BASE_TYPE> operator*(const BASE_TYPE& scalar, const Vector2<BASE_TYPE>& vec);
    Vector2<BASE_TYPE> operator*=(const BASE_TYPE& scalar, Vector2<BASE_TYPE>& vec);

    template<typename T>
    struct Vector<3, T>{
        union {
            T m_Data[3];
            struct {
                union{ T x, r, s; };
                union{ T y, g, t; };
                union{ T z, b, u; };
            };
        };

        static const U32 SIZE = 3;

        Vector();
        Vector(const Vector<3, T>& vec);
        Vector(const Vector<2, T>& vec, const T& z1);
        Vector(const T& x1, const Vector<2, T>& vec);
        Vector(const T& x1, const T& y1, const T& z1);

        Vector(const Vector<2, T>& vec);
        Vector(const Vector<4, T>& vec);

        T& operator[](const U32& index){ return m_Data[index]; }
        const T& operator[](const U32& index) const { return m_Data[index]; }

        T& At(U32 index) { return m_Data[index]; }

        Vector operator=(const Vector<3, T>& vec);

        Vector operator+(const Vector<3, T>& vec);
        Vector operator+=(const Vector<3, T>& vec);
        Vector operator-(const Vector<3, T>& vec);
        Vector operator-=(const Vector<3, T>& vec);
        Vector operator*(const T& scalar);
        Vector operator*=(const T& scalar);
        T operator*(const Vector<3, T>& vec);
        Vector operator/(const T& scalar);
        Vector operator/=(const T& scalar);

        Bool operator==(const Vector<3, T>& vec) const;
        Bool operator!=(const Vector<3, T>& vec) const { return !(operator==(vec)); }
    };
    std::ostream& operator<<(std::ostream& stream, const Vector3<BASE_TYPE>& vec);
    Vector3<BASE_TYPE> operator*(const BASE_TYPE& scalar, const Vector3<BASE_TYPE>& vec);
    Vector3<BASE_TYPE> operator*=(const BASE_TYPE& scalar, const Vector3<BASE_TYPE>& vec);
    
    template<typename T>
    struct Vector<4, T>{
        union {
            T m_Data[4];
            struct{
                union{ T x, r, s; };
                union{ T y, g, t; };
                union{ T z, b, p; };
                union{ T w, a, q; };
            };
        };

        static const U32 SIZE = 4;

        Vector();
        Vector(const Vector<4, T>& vec);
        Vector(const Vector<3, T>& vec, const T& w1);
        Vector(const T& x1, const Vector<3, T>& vec);
        Vector(const Vector<2, T>& vec, const T& z1, const T& w1);
        Vector(const T& x1, const Vector<2, T>& vec, const T& w1);
        Vector(const T& x1, const T& y1, const Vector<2, T>& vec);
        Vector(const T& x1, const T& y1, const T& z1, const T& w1);

        Vector(const Vector<2, T>& vec);
        Vector(const Vector<3, T>& vec);

        T& operator[](const U32& index) { return m_Data[index]; }
        const T& operator[](const U32& index) const { return m_Data[index]; }

        T& At(U32 index) { return m_Data[index]; }

        Vector operator=(const Vector<4, T>& vec);

        Vector operator+(const Vector<4, T>& vec);
        Vector operator+=(const Vector<4, T>& vec);
        Vector operator-(const Vector<4, T>& vec);
        Vector operator-=(const Vector<4, T>& vec);
        Vector operator*(const T& scalar);
        Vector operator*=(const T& scalar);
        T operator*(const Vector<4, T>& vec);
        Vector operator/(const T& scalar);
        Vector operator/=(const T& scalar);

        Bool operator==(const Vector<4, T>& vec) const;
        Bool operator!=(const Vector<4, T>& vec) const { return !(operator==(vec)); }
    };
    std::ostream& operator<<(std::ostream& stream, const Vector4<BASE_TYPE>& vec);
    Vector4<BASE_TYPE> operator*(const BASE_TYPE& scalar, const Vector4<BASE_TYPE>& vec);
    Vector4<BASE_TYPE> operator*=(const BASE_TYPE& scalar, const Vector4<BASE_TYPE>& vec);



    template struct Vector<2, F32>;
    template struct Vector<3, F32>;
    template struct Vector<4, F32>;
    template struct Vector<2, F64>;
    template struct Vector<3, F64>;
    template struct Vector<4, F64>;
}
