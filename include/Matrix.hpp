#pragma once

#include "Vector.hpp"

#include <ostream>
#include <format>

namespace Sylver::Math{

    // Forward declarations
    struct Matrix2x2;
    struct Matrix2x3;
    struct Matrix2x4;
    struct Matrix3x2;
    struct Matrix3x3;
    struct Matrix3x4;
    struct Matrix4x2;
    struct Matrix4x3;
    struct Matrix4x4;

    typedef Matrix2x2 Mat2x2;
    typedef Matrix2x3 Mat2x3;
    typedef Matrix2x4 Mat2x4;
    typedef Matrix3x2 Mat3x2;
    typedef Matrix3x3 Mat3x3;
    typedef Matrix3x4 Mat3x4;
    typedef Matrix4x2 Mat4x2;
    typedef Matrix4x3 Mat4x3;
    typedef Matrix4x4 Mat4x4;

    typedef Matrix4x4 Mat4;
    typedef Matrix3x3 Mat3;
    typedef Matrix2x2 Mat2;
    typedef Matrix4x4 Matrix4;
    typedef Matrix3x3 Matrix3;
    typedef Matrix2x2 Matrix2;

    Matrix4x4 Orthographic(
        const F64& left, const F64& right, 
        const F64& bottom, const F64& top,
        const F64& near, const F64& far
    );

    Matrix4x4 Projection(
        const F64& angle, const F64& ratio,
        const F64& near, const F64& far
    );

    struct Matrix2x2 {
        private:
            Vector2 m_Values[2];
        public:
            Matrix2x2();
            Matrix2x2(
                const F64& x1, const F64& y1,
                const F64& x2, const F64& y2
            );
            Matrix2x2(
                const Vector2& v1,
                const Vector2& v2
            );
            Matrix2x2(const Matrix2x2& mat);
            Matrix2x2(const Matrix2x3& mat);
            Matrix2x2(const Matrix2x4& mat);
            Matrix2x2(const Matrix3x2& mat);
            Matrix2x2(const Matrix3x3& mat);
            Matrix2x2(const Matrix3x4& mat);
            Matrix2x2(const Matrix4x2& mat);
            Matrix2x2(const Matrix4x3& mat);
            Matrix2x2(const Matrix4x4& mat);

            static Matrix2x2 Identity(F64 value = 1);

            const inline Vector2& operator[](U32 index) const { return m_Values[index]; }
            inline Vector2& operator[](U32 index) { return m_Values[index]; }

            Matrix2x2 operator*(const Matrix2x2& mat); 
            Matrix2x3 operator*(const Matrix2x3& mat); 
            Matrix2x4 operator*(const Matrix2x4& mat); 
            Matrix2x2 operator*=(const Matrix2x2& mat); 

            Matrix2x2 operator*(const F64& scalar);
            Matrix2x2 operator*=(const F64& scalar);
            Matrix2x2 operator/(const F64& scalar);
            Matrix2x2 operator/=(const F64& scalar);
            
            Matrix2x2 operator+(const Matrix2x2& mat);
            Matrix2x2 operator-(const Matrix2x2& mat);
            Matrix2x2 operator+=(const Matrix2x2& mat);
            Matrix2x2 operator-=(const Matrix2x2& mat);

            inline Bool operator==(const Matrix2x2& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1]; }

    };
    std::ostream& operator<<(std::ostream& stream, const Matrix2x2& mat);
    Matrix2x2 operator*(const F64& scalar, const Matrix2x2& mat);
    struct Matrix3x2 {
        private:
            Vector3 m_Values[2];
        public:
            Matrix3x2();
            Matrix3x2(
                const F64& x1, const F64& y1, const F64& z1,
                const F64& x2, const F64& y2, const F64& z2
            );
            Matrix3x2(
                const Vector3& v1,
                const Vector3& v2
            );
            Matrix3x2(const Matrix2x2& mat);
            Matrix3x2(const Matrix2x3& mat);
            Matrix3x2(const Matrix2x4& mat);
            Matrix3x2(const Matrix3x2& mat);
            Matrix3x2(const Matrix3x3& mat);
            Matrix3x2(const Matrix3x4& mat);
            Matrix3x2(const Matrix4x2& mat);
            Matrix3x2(const Matrix4x3& mat);
            Matrix3x2(const Matrix4x4& mat);

            static Matrix3x2 Identity(F64 value = 1);

            const inline Vector3& operator[](U32 index) const { return m_Values[index]; }
            inline Vector3& operator[](U32 index) { return m_Values[index]; }

            Matrix3x2 operator*(const Matrix2x2& mat); 
            Matrix3x3 operator*(const Matrix2x3& mat); 
            Matrix3x4 operator*(const Matrix2x4& mat); 
            Matrix3x2 operator*=(const Matrix2x2& mat); 

            Matrix3x2 operator*(const F64& scalar);
            Matrix3x2 operator*=(const F64& scalar);
            Matrix3x2 operator/(const F64& scalar);
            Matrix3x2 operator/=(const F64& scalar);
            
            Matrix3x2 operator+(const Matrix3x2& mat);
            Matrix3x2 operator-(const Matrix3x2& mat);
            Matrix3x2 operator+=(const Matrix3x2& mat);
            Matrix3x2 operator-=(const Matrix3x2& mat);

            inline Bool operator==(const Matrix3x2& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix3x2& mat);
    Matrix3x2 operator*(const F64& scalar, const Matrix3x2& mat);
    struct Matrix4x2 {
        private:
            Vector4 m_Values[2];
        public:
            Matrix4x2();
            Matrix4x2(
                const F64& x1, const F64& y1, const F64& z1, const F64& w1,
                const F64& x2, const F64& y2, const F64& z2, const F64& w2
            );
            Matrix4x2(
                const Vector4& v1,
                const Vector4& v2
            );
            Matrix4x2(const Matrix2x2& mat);
            Matrix4x2(const Matrix2x3& mat);
            Matrix4x2(const Matrix2x4& mat);
            Matrix4x2(const Matrix3x2& mat);
            Matrix4x2(const Matrix3x3& mat);
            Matrix4x2(const Matrix3x4& mat);
            Matrix4x2(const Matrix4x2& mat);
            Matrix4x2(const Matrix4x3& mat);
            Matrix4x2(const Matrix4x4& mat);

            static Matrix4x2 Identity(F64 value = 1);

            const inline Vector4& operator[](U32 index) const { return m_Values[index]; }
            inline Vector4& operator[](U32 index) { return m_Values[index]; }

            Matrix4x2 operator*(const Matrix2x2& mat); 
            Matrix4x3 operator*(const Matrix2x3& mat); 
            Matrix4x4 operator*(const Matrix2x4& mat); 
            Matrix4x2 operator*=(const Matrix2x2& mat); 

            Matrix4x2 operator*(const F64& scalar);
            Matrix4x2 operator*=(const F64& scalar);
            Matrix4x2 operator/(const F64& scalar);
            Matrix4x2 operator/=(const F64& scalar);
            
            Matrix4x2 operator+(const Matrix4x2& mat);
            Matrix4x2 operator-(const Matrix4x2& mat);
            Matrix4x2 operator+=(const Matrix4x2& mat);
            Matrix4x2 operator-=(const Matrix4x2& mat);

            inline Bool operator==(const Matrix4x2& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix4x2& mat);
    Matrix4x2 operator*(const F64& scalar, const Matrix4x2& mat);
    struct Matrix2x3 {
        private:
            Vector2 m_Values[3];
        public:
            Matrix2x3();
            Matrix2x3(
                const F64& x1, const F64& y1,
                const F64& x2, const F64& y2,
                const F64& x3, const F64& y3
            );
            Matrix2x3(
                const Vector2& v1,
                const Vector2& v2,
                const Vector2& v3
            );
            Matrix2x3(const Matrix2x2& mat);
            Matrix2x3(const Matrix2x3& mat);
            Matrix2x3(const Matrix2x4& mat);
            Matrix2x3(const Matrix3x2& mat);
            Matrix2x3(const Matrix3x3& mat);
            Matrix2x3(const Matrix3x4& mat);
            Matrix2x3(const Matrix4x2& mat);
            Matrix2x3(const Matrix4x3& mat);
            Matrix2x3(const Matrix4x4& mat);

            static Matrix2x3 Identity(F64 value = 1);
        
            const inline Vector2& operator[](U32 index) const { return m_Values[index]; }
            inline Vector2& operator[](U32 index) { return m_Values[index]; }

            Matrix2x2 operator*(const Matrix3x2& mat); 
            Matrix2x3 operator*(const Matrix3x3& mat); 
            Matrix2x4 operator*(const Matrix3x4& mat); 
            Matrix2x3 operator*=(const Matrix3x3& mat); 

            Matrix2x3 operator*(const F64& scalar);
            Matrix2x3 operator*=(const F64& scalar);
            Matrix2x3 operator/(const F64& scalar);
            Matrix2x3 operator/=(const F64& scalar);
            
            Matrix2x3 operator+(const Matrix2x3& mat);
            Matrix2x3 operator-(const Matrix2x3& mat);
            Matrix2x3 operator+=(const Matrix2x3& mat);
            Matrix2x3 operator-=(const Matrix2x3& mat);

            inline Bool operator==(const Matrix2x3& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1] && m_Values[2] == mat[2]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix2x3& mat);
    Matrix2x3 operator*(const F64& scalar, const Matrix2x3& mat);
    struct Matrix3x3 {
        private:
            Vector3 m_Values[3];
        public:
            Matrix3x3();
            Matrix3x3(
                const F64& x1, const F64& y1, const F64& z1,
                const F64& x2, const F64& y2, const F64& z2,
                const F64& x3, const F64& y3, const F64& z3
            );
            Matrix3x3(
                const Vector3& v1,
                const Vector3& v2,
                const Vector3& v3
            );
            Matrix3x3(const Matrix2x2& mat);
            Matrix3x3(const Matrix2x3& mat);
            Matrix3x3(const Matrix2x4& mat);
            Matrix3x3(const Matrix3x2& mat);
            Matrix3x3(const Matrix3x3& mat);
            Matrix3x3(const Matrix3x4& mat);
            Matrix3x3(const Matrix4x2& mat);
            Matrix3x3(const Matrix4x3& mat);
            Matrix3x3(const Matrix4x4& mat);

            static Matrix3x3 Identity(F64 value = 1);

            const inline Vector3& operator[](U32 index) const { return m_Values[index]; }
            inline Vector3& operator[](U32 index) { return m_Values[index]; }

            Matrix3x2 operator*(const Matrix3x2& mat); 
            Matrix3x3 operator*(const Matrix3x3& mat); 
            Matrix3x4 operator*(const Matrix3x4& mat); 
            Matrix3x3 operator*=(const Matrix3x3& mat); 

            Matrix3x3 operator*(const F64& scalar);
            Matrix3x3 operator*=(const F64& scalar);
            Matrix3x3 operator/(const F64& scalar);
            Matrix3x3 operator/=(const F64& scalar);
            
            Matrix3x3 operator+(const Matrix3x3& mat);
            Matrix3x3 operator-(const Matrix3x3& mat);
            Matrix3x3 operator+=(const Matrix3x3& mat);
            Matrix3x3 operator-=(const Matrix3x3& mat);

            inline Bool operator==(const Matrix3x3& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1] && m_Values[2] == mat[2]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix3x3& mat);
    Matrix3x3 operator*(const F64& scalar, const Matrix3x3& mat);
    struct Matrix4x3 {
        private:
            Vector4 m_Values[3];
        public:
            Matrix4x3();
            Matrix4x3(
                const F64& x1, const F64& y1, const F64& z1, const F64& w1,
                const F64& x2, const F64& y2, const F64& z2, const F64& w2,
                const F64& x3, const F64& y3, const F64& z3, const F64& w3
            );
            Matrix4x3(
                const Vector4& v1,
                const Vector4& v2,
                const Vector4& v3
            );
            Matrix4x3(const Matrix2x2& mat);
            Matrix4x3(const Matrix2x3& mat);
            Matrix4x3(const Matrix2x4& mat);
            Matrix4x3(const Matrix3x2& mat);
            Matrix4x3(const Matrix3x3& mat);
            Matrix4x3(const Matrix3x4& mat);
            Matrix4x3(const Matrix4x2& mat);
            Matrix4x3(const Matrix4x3& mat);
            Matrix4x3(const Matrix4x4& mat);

            static Matrix4x3 Identity(F64 value = 1);

            const inline Vector4& operator[](U32 index) const { return m_Values[index]; }
            inline Vector4& operator[](U32 index) { return m_Values[index]; }

            Matrix4x2 operator*(const Matrix3x2& mat); 
            Matrix4x3 operator*(const Matrix3x3& mat); 
            Matrix4x4 operator*(const Matrix3x4& mat); 
            Matrix4x3 operator*=(const Matrix3x3& mat); 

            Matrix4x3 operator*(const F64& scalar);
            Matrix4x3 operator*=(const F64& scalar);
            Matrix4x3 operator/(const F64& scalar);
            Matrix4x3 operator/=(const F64& scalar);
            
            Matrix4x3 operator+(const Matrix4x3& mat);
            Matrix4x3 operator-(const Matrix4x3& mat);
            Matrix4x3 operator+=(const Matrix4x3& mat);
            Matrix4x3 operator-=(const Matrix4x3& mat);

            inline Bool operator==(const Matrix4x3& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1] && m_Values[2] == mat[2]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix4x3& mat);
    Matrix4x3 operator*(const F64& scalar, const Matrix4x3& mat);
    struct Matrix2x4 {
        private:
            Vector2 m_Values[4];
        public:
            Matrix2x4();
            Matrix2x4(
                const F64& x1, const F64& y1,
                const F64& x2, const F64& y2,
                const F64& x3, const F64& y3,
                const F64& x4, const F64& y4
            );
            Matrix2x4(
                const Vector2& v1,
                const Vector2& v2,
                const Vector2& v3,
                const Vector2& v4
            );
            Matrix2x4(const Matrix2x2& mat);
            Matrix2x4(const Matrix2x3& mat);
            Matrix2x4(const Matrix2x4& mat);
            Matrix2x4(const Matrix3x2& mat);
            Matrix2x4(const Matrix3x3& mat);
            Matrix2x4(const Matrix3x4& mat);
            Matrix2x4(const Matrix4x2& mat);
            Matrix2x4(const Matrix4x3& mat);
            Matrix2x4(const Matrix4x4& mat);

            static Matrix2x4 Identity(F64 value = 1);

            const inline Vector2& operator[](U32 index) const { return m_Values[index]; }
            inline Vector2& operator[](U32 index) { return m_Values[index]; }

            Matrix2x2 operator*(const Matrix4x2& mat); 
            Matrix2x3 operator*(const Matrix4x3& mat); 
            Matrix2x4 operator*(const Matrix4x4& mat); 
            Matrix2x4 operator*=(const Matrix4x4& mat); 

            Matrix2x4 operator*(const F64& scalar);
            Matrix2x4 operator*=(const F64& scalar);
            Matrix2x4 operator/(const F64& scalar);
            Matrix2x4 operator/=(const F64& scalar);
            
            Matrix2x4 operator+(const Matrix2x4& mat);
            Matrix2x4 operator-(const Matrix2x4& mat);
            Matrix2x4 operator+=(const Matrix2x4& mat);
            Matrix2x4 operator-=(const Matrix2x4& mat);

            inline Bool operator==(const Matrix2x4& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1] && m_Values[2] == mat[2] && m_Values[3] == mat[3]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix2x4& mat);
    Matrix2x4 operator*(const F64& scalar, const Matrix2x4& mat);
    struct Matrix3x4 {
        private:
            Vector3 m_Values[4];
        public:
            Matrix3x4();
            Matrix3x4(
                const F64& x1, const F64& y1, const F64& z1,
                const F64& x2, const F64& y2, const F64& z2,
                const F64& x3, const F64& y3, const F64& z3,
                const F64& x4, const F64& y4, const F64& z4
            );
            Matrix3x4(
                const Vector3& v1,
                const Vector3& v2,
                const Vector3& v3,
                const Vector3& v4
            );
            Matrix3x4(const Matrix2x2& mat);
            Matrix3x4(const Matrix2x3& mat);
            Matrix3x4(const Matrix2x4& mat);
            Matrix3x4(const Matrix3x2& mat);
            Matrix3x4(const Matrix3x3& mat);
            Matrix3x4(const Matrix3x4& mat);
            Matrix3x4(const Matrix4x2& mat);
            Matrix3x4(const Matrix4x3& mat);
            Matrix3x4(const Matrix4x4& mat);

            static Matrix3x4 Identity(F64 value = 1);

            const inline Vector3& operator[](U32 index) const { return m_Values[index]; }
            inline Vector3& operator[](U32 index) { return m_Values[index]; }

            Matrix3x2 operator*(const Matrix4x2& mat); 
            Matrix3x3 operator*(const Matrix4x3& mat); 
            Matrix3x4 operator*(const Matrix4x4& mat); 
            Matrix3x4 operator*=(const Matrix4x4& mat); 

            Matrix3x4 operator*(const F64& scalar);
            Matrix3x4 operator*=(const F64& scalar);
            Matrix3x4 operator/(const F64& scalar);
            Matrix3x4 operator/=(const F64& scalar);
            
            Matrix3x4 operator+(const Matrix3x4& mat);
            Matrix3x4 operator-(const Matrix3x4& mat);
            Matrix3x4 operator+=(const Matrix3x4& mat);
            Matrix3x4 operator-=(const Matrix3x4& mat);

            inline Bool operator==(const Matrix3x4& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1] && m_Values[2] == mat[2] && m_Values[3] == mat[3]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix3x4& mat);
    Matrix3x4 operator*(const F64& scalar, const Matrix3x4& mat);
    struct Matrix4x4 {
        private:
            Vector4 m_Values[4];
        public:
            Matrix4x4();
            Matrix4x4(
                const F64& x1, const F64& y1, const F64& z1, const F64& w1,
                const F64& x2, const F64& y2, const F64& z2, const F64& w2,
                const F64& x3, const F64& y3, const F64& z3, const F64& w3,
                const F64& x4, const F64& y4, const F64& z4, const F64& w4
            );
            Matrix4x4(
                const Vector4& v1,
                const Vector4& v2,
                const Vector4& v3,
                const Vector4& v4
            );
            Matrix4x4(const Matrix2x2& mat);
            Matrix4x4(const Matrix2x3& mat);
            Matrix4x4(const Matrix2x4& mat);
            Matrix4x4(const Matrix3x2& mat);
            Matrix4x4(const Matrix3x3& mat);
            Matrix4x4(const Matrix3x4& mat);
            Matrix4x4(const Matrix4x2& mat);
            Matrix4x4(const Matrix4x3& mat);
            Matrix4x4(const Matrix4x4& mat);

            static Matrix4x4 Identity(F64 value = 1);

            const inline Vector4& operator[](U32 index) const { return m_Values[index]; }
            inline Vector4& operator[](U32 index) { return m_Values[index]; }

            Matrix4x2 operator*(const Matrix4x2& mat); 
            Matrix4x3 operator*(const Matrix4x3& mat); 
            Matrix4x4 operator*(const Matrix4x4& mat); 
            Matrix4x4 operator*=(const Matrix4x4& mat); 

            Matrix4x4 operator*(const F64& scalar);
            Matrix4x4 operator*=(const F64& scalar);
            Matrix4x4 operator/(const F64& scalar);
            Matrix4x4 operator/=(const F64& scalar);
            
            Matrix4x4 operator+(const Matrix4x4& mat);
            Matrix4x4 operator-(const Matrix4x4& mat);
            Matrix4x4 operator+=(const Matrix4x4& mat);
            Matrix4x4 operator-=(const Matrix4x4& mat);

            inline Bool operator==(const Matrix4x4& mat) const { return m_Values[0] == mat[0] && m_Values[1] == mat[1] && m_Values[2] == mat[2] && m_Values[3] == mat[3]; }
    };
    std::ostream& operator<<(std::ostream& stream, const Matrix4x4& mat);
    Matrix4x4 operator*(const F64& scalar, const Matrix4x4& mat);
}
