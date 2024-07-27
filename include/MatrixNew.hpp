#pragma once

#include "Types.hpp"
#include "Vector.hpp"
#include <format>


namespace Sylver::Math{

    template<std::size_t L, std::size_t W, typename T>
    struct Matrix{
        private:
            Vector<W, T> m_Values[L];
        public:

            Matrix();
            Matrix(const Matrix<L, W, T>& mat);
            template<std::size_t nL, std::size_t nW>
            Matrix(const Matrix<nL, nW, T>& mat){
                for(U32 i = 0; i < L; i++){
                    for(U32 j = 0; j < W; j++){
                        m_Values[i][j] = T();
                    }
                }
                U32 sL = L < nL ? L : nL; 
                U32 sW = W < nW ? W : nW; 

                for(U32 i = 0; i < sL; i++){
                    for(U32 j = 0; j < sW; j++){
                        m_Values[i][j] = mat[i][j];
                    }
                }
            }

            Matrix( const T& x1, const T& y1, 
                    const T& x2, const T& y2
            ) requires(L == 2 && W == 2){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
            }
            Matrix( const T& x1, const T& y1, 
                    const T& x2, const T& y2, 
                    const T& x3, const T& y3
            ) requires(L == 3 && W == 2){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[2].x = x3;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[2].y = y3;
            }
            Matrix( const T& x1, const T& y1, 
                    const T& x2, const T& y2, 
                    const T& x3, const T& y3, 
                    const T& x4, const T& y4
            ) requires(L == 4 && W == 2){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[2].x = x3;
                m_Values[3].x = x4;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[2].y = y3;
                m_Values[3].y = y4;
            }
            Matrix( const T& x1, const T& y1, const T& z1, 
                    const T& x2, const T& y2, const T& z2
            ) requires(L == 2 && W == 3){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[0].z = z1;
                m_Values[1].z = z2;
            }
            Matrix( const T& x1, const T& y1, const T& z1,
                    const T& x2, const T& y2, const T& z2,
                    const T& x3, const T& y3, const T& z3
            ) requires(L == 3 && W == 3){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[2].x = x3;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[2].y = y3;
                m_Values[0].z = z1;
                m_Values[1].z = z2;
                m_Values[2].z = z3;
            }
            Matrix( const T& x1, const T& y1, const T& z1,
                    const T& x2, const T& y2, const T& z2,
                    const T& x3, const T& y3, const T& z3,
                    const T& x4, const T& y4, const T& z4
            ) requires(L == 4 && W == 3){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[2].x = x3;
                m_Values[3].x = x4;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[2].y = y3;
                m_Values[3].y = y4;
                m_Values[0].z = z1;
                m_Values[1].z = z2;
                m_Values[2].z = z3;
                m_Values[3].z = z4;
            }
            Matrix( const T& x1, const T& y1, const T& z1, const T& w1,
                    const T& x2, const T& y2, const T& z2, const T& w2
            ) requires(L == 2 && W == 4){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[0].z = z1;
                m_Values[1].z = z2;
                m_Values[0].w = w1;
                m_Values[1].w = w2;
            }
            Matrix( const T& x1, const T& y1, const T& z1, const T& w1,
                    const T& x2, const T& y2, const T& z2, const T& w2,
                    const T& x3, const T& y3, const T& z3, const T& w3
            ) requires(L == 3 && W == 4){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[2].x = x3;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[2].y = y3;
                m_Values[0].z = z1;
                m_Values[1].z = z2;
                m_Values[2].z = z3;
                m_Values[0].w = w1;
                m_Values[1].w = w2;
                m_Values[2].w = w3;
            }
            Matrix( const T& x1, const T& y1, const T& z1, const T& w1,
                    const T& x2, const T& y2, const T& z2, const T& w2,
                    const T& x3, const T& y3, const T& z3, const T& w3,
                    const T& x4, const T& y4, const T& z4, const T& w4
            ) requires(L == 4 && W == 4){
                m_Values[0].x = x1;
                m_Values[1].x = x2;
                m_Values[2].x = x3;
                m_Values[3].x = x4;
                m_Values[0].y = y1;
                m_Values[1].y = y2;
                m_Values[2].y = y3;
                m_Values[3].y = y4;
                m_Values[0].z = z1;
                m_Values[1].z = z2;
                m_Values[2].z = z3;
                m_Values[3].z = z4;
                m_Values[0].w = w1;
                m_Values[1].w = w2;
                m_Values[2].w = w3;
                m_Values[3].w = w4;
            }

            Matrix( const Vector<W, T>& vec1, const Vector<W, T>& vec2) requires(L == 2) {
                m_Values[0] = vec1;
                m_Values[1] = vec2;
            }
            Matrix( const Vector<W, T>& vec1, const Vector<W, T>& vec2, const Vector<W, T>& vec3) requires(L == 3) {
                m_Values[0] = vec1;
                m_Values[1] = vec2;
                m_Values[2] = vec3;
            }
            Matrix( const Vector<W, T>& vec1, const Vector<W, T>& vec2, const Vector<W, T>& vec3, const Vector<W, T>& vec4) requires(L == 4) {
                m_Values[0] = vec1;
                m_Values[1] = vec2;
                m_Values[2] = vec3;
                m_Values[3] = vec4;
            }

            static Matrix<L, W, T> Identity(T values = 1);
            const inline Vector<W, T>& operator[](U32 index) const { return m_Values[index]; }
            inline Vector<W, T>& operator[](U32 index) { return m_Values[index]; }
            Vector<W, T>& At(U32 index) { return m_Values[index]; }

            template<std::size_t nW>
            Matrix<nW, W, T> operator*(const Matrix<nW, L, T>& mat){
                Matrix<nW, W, T> result; 
                for(U32 i = 0; i < W; i++){
                    for(U32 j = 0; j < nW; j++){
                        Vector<L, T> vec;
                        for(U32 k = 0; k < L; k++){
                            vec[k] = m_Values[k][i];
                        }
                        result[j][i] = vec * mat[j];
                    }
                }
                return result;
            }

            Matrix<L, W, T> operator*(const T& scalar);
            Matrix<L, W, T> operator*=(const T& scalar);
            Matrix<L, W, T> operator/(const T& scalar);
            Matrix<L, W, T> operator/=(const T& scalar);

            Matrix<L, W, T> operator+(const Matrix<L, W, T>& mat);
            Matrix<L, W, T> operator+=(const Matrix<L, W, T>& mat);
            Matrix<L, W, T> operator-(const Matrix<L, W, T>& mat);
            Matrix<L, W, T> operator-=(const Matrix<L, W, T>& mat);

            const Bool operator==(const Matrix<L, W, T>& mat) const;
    };
    template<std::size_t L, std::size_t W, typename T>
    static std::ostream& operator<<(std::ostream& stream, const Matrix<L, W, T>& mat){
        for(U32 i = 0; i < W; i++){
            stream << "|  ";
            for(U32 j = 0; j < L; j++){
                stream << std::format("{:.2f}  ", mat[j][i]);
            }
            stream << "|\n";
        }
        return stream;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> operator*(const T& scalar, const Matrix<L, W, T>& mat);


    template <std::size_t L, typename T>
    using Matrix2 = Matrix<L, 2, T>;
    template <std::size_t L, typename T>
    using Matrix3 = Matrix<L, 3, T>;
    template <std::size_t L, typename T>
    using Matrix4 = Matrix<L, 4, T>;

    template<typename T = BASE_TYPE>
    using Matrix2x2 = Matrix2<2, T>;
    template<typename T = BASE_TYPE>
    using Matrix2x3 = Matrix2<3, T>;
    template<typename T = BASE_TYPE>
    using Matrix2x4 = Matrix2<4, T>;

    template<typename T = BASE_TYPE>
    using Matrix3x2 = Matrix3<2, T>;
    template<typename T = BASE_TYPE>
    using Matrix3x3 = Matrix3<3, T>;
    template<typename T = BASE_TYPE>
    using Matrix3x4 = Matrix3<4, T>;

    template<typename T = BASE_TYPE>
    using Matrix4x2 = Matrix4<2, T>;
    template<typename T = BASE_TYPE>
    using Matrix4x3 = Matrix4<3, T>;
    template<typename T = BASE_TYPE>
    using Matrix4x4 = Matrix4<4, T>;

    using Matrix2x2f = Matrix2x2<F32>;
    using Matrix2x3f = Matrix2x3<F32>;
    using Matrix2x4f = Matrix2x4<F32>;
    using Matrix3x2f = Matrix3x2<F32>;
    using Matrix3x3f = Matrix3x3<F32>;
    using Matrix3x4f = Matrix3x4<F32>;
    using Matrix4x2f = Matrix4x2<F32>;
    using Matrix4x3f = Matrix4x3<F32>;
    using Matrix4x4f = Matrix4x4<F32>;

    using Matrix2x2d = Matrix2x2<F64>;
    using Matrix2x3d = Matrix2x3<F64>;
    using Matrix2x4d = Matrix2x4<F64>;
    using Matrix3x2d = Matrix3x2<F64>;
    using Matrix3x3d = Matrix3x3<F64>;
    using Matrix3x4d = Matrix3x4<F64>;
    using Matrix4x2d = Matrix4x2<F64>;
    using Matrix4x3d = Matrix4x3<F64>;
    using Matrix4x4d = Matrix4x4<F64>;

    template struct Matrix<2,2, F32>;
    template struct Matrix<2,3, F32>;
    template struct Matrix<2,4, F32>;
    template struct Matrix<3,2, F32>;
    template struct Matrix<3,3, F32>;
    template struct Matrix<3,4, F32>;
    template struct Matrix<4,2, F32>;
    template struct Matrix<4,3, F32>;
    template struct Matrix<4,4, F32>;
    template struct Matrix<2,2, F64>;
    template struct Matrix<2,3, F64>;
    template struct Matrix<2,4, F64>;
    template struct Matrix<3,2, F64>;
    template struct Matrix<3,3, F64>;
    template struct Matrix<3,4, F64>;
    template struct Matrix<4,2, F64>;
    template struct Matrix<4,3, F64>;
    template struct Matrix<4,4, F64>;


}
