#include "Matrix.hpp"


namespace Sylver::Math {

    // ************************************************************************
    // Mat2x2 *****************************************************************
    // ************************************************************************
    Matrix2x2 Matrix2x2::Identity(BASE_TYPE value){
        return {
            { value, 0.0 },
            { 0.0, value }
        };
    }
    Matrix2x2::Matrix2x2(){
        m_Values[0].x = 0.0;
        m_Values[0].y = 0.0;
        m_Values[1].x = 0.0;
        m_Values[1].y = 0.0;
    }
    Matrix2x2::Matrix2x2(
        const BASE_TYPE& x1, const BASE_TYPE& y1,
        const BASE_TYPE& x2, const BASE_TYPE& y2
        ){
        m_Values[0].x = x1;
        m_Values[0].y = y1;
        m_Values[1].x = x2;
        m_Values[1].y = y2;
    }
    Matrix2x2::Matrix2x2(
        const Vector2<>& v1,
        const Vector2<>& v2
    ){
        m_Values[0] = v1;
        m_Values[1] = v2;
    }
    Matrix2x2::Matrix2x2(const Matrix2x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix2x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix2x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix3x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix3x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix3x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix4x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix4x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }
    Matrix2x2::Matrix2x2(const Matrix4x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
    }

    Matrix2x2 Matrix2x2::operator*(const Matrix2x2& mat){
        Matrix2x2 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        return result;
    }
    Matrix2x3 Matrix2x2::operator*(const Matrix2x3& mat){
        Matrix2x3 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[2].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[2];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        result[2].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[2];
        return result;
    }
    Matrix2x4 Matrix2x2::operator*(const Matrix2x4& mat){
        Matrix2x4 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[2].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[2];
        result[3].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[3];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        result[2].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[2];
        result[3].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[3];
        return result;
    }
    Matrix2x2 Matrix2x2::operator*=(const Matrix2x2& mat){
        Matrix2x2 result;
        result[0].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[0];
        result[1].x = Vector2<>(m_Values[0].x, m_Values[1].x) * mat[1];
        result[0].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[0];
        result[1].y = Vector2<>(m_Values[0].y, m_Values[1].y) * mat[1];
        
        m_Values[0].x = result[0].x;
        m_Values[1].x = result[1].x;
        m_Values[0].y = result[0].y;
        m_Values[1].y = result[1].y;
        return result;
    }
    Matrix2x2 Matrix2x2::operator*(const BASE_TYPE& scalar){
        Matrix2x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] * scalar;
        }
        return result;
    }
    Matrix2x2 Matrix2x2::operator*=(const BASE_TYPE& scalar){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] *= scalar;
        }
        return *this;
    }
    Matrix2x2 Matrix2x2::operator/(const BASE_TYPE& scalar){
        Matrix2x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] / scalar;
        }
        return result;
    }
    Matrix2x2 Matrix2x2::operator/=(const BASE_TYPE& scalar){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] /= scalar;
        }
        return *this;
    }
    Matrix2x2 Matrix2x2::operator+(const Matrix2x2& mat){
        Matrix2x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] + mat[i];
        }
        return result;
    }
    Matrix2x2 Matrix2x2::operator+=(const Matrix2x2& mat){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] += mat[i];
        }
        return *this;
    }
    Matrix2x2 Matrix2x2::operator-(const Matrix2x2& mat){
        Matrix2x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = m_Values[i] - mat[i];
        }
        return result;
    }
    Matrix2x2 Matrix2x2::operator-=(const Matrix2x2& mat){
        for(U32 i = 0; i < 2; i++){
            m_Values[i] -= mat[i];
        }
        return *this;
    }
    std::ostream& operator<<(std::ostream& stream, const Matrix2x2& mat){
        stream << std::format("|  {:.2f}  {:.2f}  |\n", mat[0].x, mat[1].x);
        stream << std::format("|  {:.2f}  {:.2f}  |\n", mat[0].y, mat[1].y);
        return stream;
    }
    Matrix2x2 operator*(const BASE_TYPE& scalar, const Matrix2x2& mat){
        Matrix2x2 result;
        for(U32 i = 0; i < 2; i++){
            result[i] = scalar * mat[i];
        }
        return result;
    }
}
