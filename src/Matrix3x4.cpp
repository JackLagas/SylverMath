#include "Matrix.hpp"


namespace Sylver::Math {

    // ************************************************************************
    // Mat3x4 *****************************************************************
    // ************************************************************************
    Matrix3x4 Matrix3x4::Identity(F64 value){
        return {
            { value,    0.0,    0.0     },
            { 0.0,      value,  0.0     },
            { 0.0,      0.0,    value   },
            { 0.0,      0.0,    0.0     }
        };
    }
    Matrix3x4::Matrix3x4(){
        m_Values[0].x = 0.0;
        m_Values[0].y = 0.0;
        m_Values[0].z = 0.0;
        m_Values[1].x = 0.0;
        m_Values[1].y = 0.0;
        m_Values[1].z = 0.0;
        m_Values[2].x = 0.0;
        m_Values[2].y = 0.0;
        m_Values[2].z = 0.0;
        m_Values[3].x = 0.0;
        m_Values[3].y = 0.0;
        m_Values[3].z = 0.0;
    }
    Matrix3x4::Matrix3x4(
        const F64& x1, const F64& y1, const F64& z1,
        const F64& x2, const F64& y2, const F64& z2,
        const F64& x3, const F64& y3, const F64& z3,
        const F64& x4, const F64& y4, const F64& z4
        ){
        m_Values[0].x = x1;
        m_Values[0].y = y1;
        m_Values[0].z = z1;
        m_Values[1].x = x2;
        m_Values[1].y = y2;
        m_Values[1].z = z2;
        m_Values[2].x = x3;
        m_Values[2].y = y3;
        m_Values[2].z = z3;
        m_Values[3].x = x4;
        m_Values[3].y = y4;
        m_Values[3].z = z4;
    }
    Matrix3x4::Matrix3x4(
        const Vector3& v1,
        const Vector3& v2,
        const Vector3& v3,
        const Vector3& v4
    ){
        m_Values[0] = v1;
        m_Values[1] = v2;
        m_Values[2] = v3;
        m_Values[3] = v4;
    }
    Matrix3x4::Matrix3x4(const Matrix2x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = {0.0, 0.0, 0.0};
        m_Values[3] = {0.0, 0.0, 0.0};
    }
    Matrix3x4::Matrix3x4(const Matrix2x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = mat[2];
        m_Values[3] = {0.0, 0.0, 0.0};
    }
    Matrix3x4::Matrix3x4(const Matrix2x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = mat[2];
        m_Values[3] = mat[3];
    }
    Matrix3x4::Matrix3x4(const Matrix3x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = {0.0, 0.0, 0.0};
        m_Values[3] = {0.0, 0.0, 0.0};
    }
    Matrix3x4::Matrix3x4(const Matrix3x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = mat[2];
        m_Values[3] = {0.0, 0.0, 0.0};
    }
    Matrix3x4::Matrix3x4(const Matrix3x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = mat[2];
        m_Values[3] = mat[3];
    }
    Matrix3x4::Matrix3x4(const Matrix4x2& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = {0.0, 0.0, 0.0};
        m_Values[3] = {0.0, 0.0, 0.0};
    }
    Matrix3x4::Matrix3x4(const Matrix4x3& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = mat[2];
        m_Values[3] = {0.0, 0.0, 0.0};
    }
    Matrix3x4::Matrix3x4(const Matrix4x4& mat){
        m_Values[0] = mat[0];
        m_Values[1] = mat[1];
        m_Values[2] = mat[2];
        m_Values[3] = mat[3];
    }

    Matrix3x2 Matrix3x4::operator*(const Matrix4x2& mat){
        Matrix3x2 result;
        result[0].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[0];
        result[1].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[1];
        result[0].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[0];
        result[1].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[1];
        result[0].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[0];
        result[1].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[1];
        return result;
    }
    Matrix3x3 Matrix3x4::operator*(const Matrix4x3& mat){
        Matrix3x3 result;
        result[0].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[0];
        result[1].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[1];
        result[2].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[2];
        result[0].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[0];
        result[1].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[1];
        result[2].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[2];
        result[0].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[0];
        result[1].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[1];
        result[2].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[2];
        return result;
    }
    Matrix3x4 Matrix3x4::operator*(const Matrix4x4& mat){
        Matrix3x4 result;
        result[0].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[0];
        result[1].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[1];
        result[2].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[2];
        result[3].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].y, m_Values[3].x) * mat[3];
        result[0].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[0];
        result[1].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[1];
        result[2].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[2];
        result[3].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[3];
        result[0].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[0];
        result[1].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[1];
        result[2].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[2];
        result[3].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[3];
        return result;
    }
    Matrix3x4 Matrix3x4::operator*=(const Matrix4x4& mat){
        Matrix3x4 result;
        result[0].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[0];
        result[1].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[1];
        result[2].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].x, m_Values[3].x) * mat[2];
        result[3].x = Vector4(m_Values[0].x, m_Values[1].x, m_Values[2].y, m_Values[3].x) * mat[3];
        result[0].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[0];
        result[1].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[1];
        result[2].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[2];
        result[3].y = Vector4(m_Values[0].y, m_Values[1].y, m_Values[2].y, m_Values[3].y) * mat[3];
        result[0].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[0];
        result[1].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[1];
        result[2].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[2];
        result[3].z = Vector4(m_Values[0].z, m_Values[1].z, m_Values[2].z, m_Values[3].z) * mat[3];

        m_Values[0].x = result[0].x;
        m_Values[1].x = result[1].x;
        m_Values[2].x = result[2].x;
        m_Values[3].x = result[3].x;
        m_Values[0].y = result[0].y;
        m_Values[1].y = result[1].y;
        m_Values[2].y = result[2].y;
        m_Values[3].y = result[3].y;
        m_Values[0].z = result[0].z;
        m_Values[1].z = result[1].z;
        m_Values[2].z = result[2].z;
        m_Values[3].z = result[3].z;
        return result;
    }
    Matrix3x4 Matrix3x4::operator*(const F64& scalar){
        Matrix3x4 result;
        for(U32 i = 0; i < 4; i++){
            result[i] = m_Values[i] * scalar;
        }
        return result;
    }
    Matrix3x4 Matrix3x4::operator*=(const F64& scalar){
        for(U32 i = 0; i < 4; i++){
            m_Values[i] *= scalar;
        }
        return *this;
    }
    Matrix3x4 Matrix3x4::operator/(const F64& scalar){
        Matrix3x4 result;
        for(U32 i = 0; i < 4; i++){
            result[i] = m_Values[i] / scalar;
        }
        return result;
    }
    Matrix3x4 Matrix3x4::operator/=(const F64& scalar){
        for(U32 i = 0; i < 4; i++){
            m_Values[i] /= scalar;
        }
        return *this;
    }
    Matrix3x4 Matrix3x4::operator+(const Matrix3x4& mat){
        Matrix3x4 result;
        for(U32 i = 0; i < 4; i++){
            result[i] = m_Values[i] + mat[i];
        }
        return result;
    }
    Matrix3x4 Matrix3x4::operator+=(const Matrix3x4& mat){
        for(U32 i = 0; i < 4; i++){
            m_Values[i] += mat[i];
        }
        return *this;
    }
    Matrix3x4 Matrix3x4::operator-(const Matrix3x4& mat){
        Matrix3x4 result;
        for(U32 i = 0; i < 4; i++){
            result[i] = m_Values[i] - mat[i];
        }
        return result;
    }
    Matrix3x4 Matrix3x4::operator-=(const Matrix3x4& mat){
        for(U32 i = 0; i < 4; i++){
            m_Values[i] -= mat[i];
        }
        return *this;
    }
    std::ostream& operator<<(std::ostream& stream, const Matrix3x4& mat){
        stream << std::format("|  {:.2f}  {:.2f}  {:.2f}  {:.2f}  |\n", mat[0].x, mat[1].x, mat[2].x, mat[3].x);
        stream << std::format("|  {:.2f}  {:.2f}  {:.2f}  {:.2f}  |\n", mat[0].y, mat[1].y, mat[2].y, mat[3].y);
        stream << std::format("|  {:.2f}  {:.2f}  {:.2f}  {:.2f}  |\n", mat[0].z, mat[1].z, mat[2].z, mat[3].z);
        return stream;
    }
    Matrix3x4 operator*(const F64& scalar, const Matrix3x4& mat){
        Matrix3x4 result;
        for(U32 i = 0; i < 4; i++){
            result[i] = scalar * mat[i];
        }
        return result;
    }
}