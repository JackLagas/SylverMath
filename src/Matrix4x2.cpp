#include "Matrix.hpp"


namespace Sylver::Math {

    // ************************************************************************
    // Mat4x2 *****************************************************************
    // ************************************************************************
    Matrix4x2 Matrix4x2::Identity(BASE_TYPE value){
        return {
            { value, 0.0, 0.0, 0.0 },
            { 0.0, value, 0.0, 0.0 },
        };
    }
    Matrix4x2::Matrix4x2(){
        m_Values[0].x = 0.0;
        m_Values[0].y = 0.0;
        m_Values[0].z = 0.0;
        m_Values[0].w = 0.0;
        m_Values[1].x = 0.0;
        m_Values[1].y = 0.0;
        m_Values[1].z = 0.0;
        m_Values[1].w = 0.0;
    }
    Matrix4x2::Matrix4x2(
        const BASE_TYPE& x1, const BASE_TYPE& y1, const BASE_TYPE& z1, const BASE_TYPE& w1,
        const BASE_TYPE& x2, const BASE_TYPE& y2, const BASE_TYPE& z2, const BASE_TYPE& w2
        ){
        m_Values[0].x = x1;
        m_Values[0].y = y1;
        m_Values[0].z = z1;
        m_Values[0].w = w1;
        m_Values[1].x = x2;
        m_Values[1].y = y2;
        m_Values[1].z = z2;
        m_Values[1].w = w2;
    }
    Matrix4x2::Matrix4x2(
        const Vector4<>& v1,
        const Vector4<>& v2
    ){
        m_Values[0] = v1;
        m_Values[1] = v2;
    }
    Matrix4x2::Matrix4x2(const Matrix2x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix2x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix2x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix3x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix3x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix3x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix4x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix4x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2::Matrix4x2(const Matrix4x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix4x2 Matrix4x2::operator*(const Matrix2x2& mat){
        Matrix4x2 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        result[0].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[0];
        result[1].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[1];
        result[0].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[0];
        result[1].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[1];
        return result;
    }
    Matrix4x3 Matrix4x2::operator*(const Matrix2x3& mat){
        Matrix4x3 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[2].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[2];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        result[2].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[2];
        result[0].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[0];
        result[1].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[1];
        result[2].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[2];
        result[0].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[0];
        result[1].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[1];
        result[2].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[2];
        return result;
    }
    Matrix4x4 Matrix4x2::operator*(const Matrix2x4& mat){
        Matrix4x4 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[2].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[2];
        result[3].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[3];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        result[2].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[2];
        result[3].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[3];
        result[0].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[0];
        result[1].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[1];
        result[2].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[2];
        result[3].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[3];
        result[0].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[0];
        result[1].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[1];
        result[2].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[2];
        result[3].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[3];
        return result;
    }
    Matrix4x2 Matrix4x2::operator*=(const Matrix2x2& mat){
        Matrix4x2 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        result[0].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[0];
        result[1].z = Vector2<>(m_Values[0].z, m_Values[1].z) * mat[1];
        result[0].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[0];
        result[1].w = Vector2<>(m_Values[0].w, m_Values[1].w) * mat[1];
        
        m_Values[0].x = result[0].x;
        m_Values[1].x = result[1].x;
        m_Values[0].y = result[0].y;
        m_Values[1].y = result[1].y;
        m_Values[0].z = result[0].z;
        m_Values[1].z = result[1].z;
        m_Values[0].w = result[0].w;
        m_Values[1].w = result[1].w;
        return result;
    }
    Matrix4x2 Matrix4x2::operator*(const BASE_TYPE& scalar){
        Matrix4x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] * scalar;
        }
        return result;
    }
    Matrix4x2 Matrix4x2::operator*=(const BASE_TYPE& scalar){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] *= scalar;
        }
        return *this;
    }
    Matrix4x2 Matrix4x2::operator/(const BASE_TYPE& scalar){
        Matrix4x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] / scalar;
        }
        return result;
    }
    Matrix4x2 Matrix4x2::operator/=(const BASE_TYPE& scalar){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] /= scalar;
        }
        return *this;
    }
    Matrix4x2 Matrix4x2::operator+(const Matrix4x2& mat){
        Matrix4x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] + mat[i];
        }
        return result;
    }
    Matrix4x2 Matrix4x2::operator+=(const Matrix4x2& mat){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] += mat[i];
        }
        return *this;
    }
    Matrix4x2 Matrix4x2::operator-(const Matrix4x2& mat){
        Matrix4x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] - mat[i];
        }
        return result;
    }
    Matrix4x2 Matrix4x2::operator-=(const Matrix4x2& mat){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] -= mat[i];
        }
        return *this;
    }
    std::ostream& operator<<(std::ostream& stream, const Matrix4x2& mat){
        stream << std::format("|  {:.2f}  {:.2f}  |\n", mat[0].x, mat[1].x);
        stream << std::format("|  {:.2f}  {:.2f}  |\n", mat[0].y, mat[1].y);
        stream << std::format("|  {:.2f}  {:.2f}  |\n", mat[0].z, mat[1].z);
        stream << std::format("|  {:.2f}  {:.2f}  |\n", mat[0].w, mat[1].w);
        return stream;
    }
    Matrix4x2 operator*(const BASE_TYPE& scalar, const Matrix4x2& mat){
        Matrix4x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = scalar * mat[i];
        }
        return result;
    }
}
