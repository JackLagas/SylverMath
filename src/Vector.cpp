#include "Vector.hpp"

#include <stdexcept>
#include <algorithm>

namespace Sylver::Math {

    // ************************************************************************
    // Vector2 ****************************************************************
    // ************************************************************************
    Vector2::Vector2(){
        x = 0.0;
        y = 0.0;
    }
    Vector2::Vector2(const Vector2& vec){
        x = vec.x;
        y = vec.y;
    }
    Vector2::Vector2(const F64& x1, const F64& y1){
        x = x1;
        y = y1;
    }

    Vector2::Vector2(const Vector3& vec){
        x = vec.x;
        y = vec.y;
    }
    Vector2::Vector2(const Vector4& vec){
        x = vec.x;
        y = vec.y;
    }

    F64 Vector2::operator[](const U32& index){
        if(index > SIZE - 1) throw std::out_of_range("Vector2 out of range");
        switch(index){
            case 0:
                return x;
            case 1:
                return y;
            default:
                throw std::out_of_range("Unknown Vector2 index");
        }
    }
    const F64 Vector2::operator[](const U32& index) const {
        if(index > SIZE - 1) throw std::out_of_range("Vector2 out of range");
        switch(index){
            case 0:
                return x;
            case 1:
                return y;
            default:
                throw std::out_of_range("Unknown Vector2 index");
        }
    }

    Vector2 Vector2::operator=(const Vector2& vec){
        x = vec.x;
        y = vec.y;
        return *this;
    }

    Vector2 Vector2::operator+(const Vector2& vec){
        return { x + vec.x, y + vec.y };
    }
    Vector2 Vector2::operator+=(const Vector2& vec){
        x += vec.x;
        y += vec.y;
        return *this;
    }
    Vector2 Vector2::operator-(const Vector2& vec){
        return { x - vec.x, y - vec.y };
    }
    Vector2 Vector2::operator-=(const Vector2& vec){
        x -= vec.x;
        y -= vec.y;
        return *this;
    }
    Vector2 Vector2::operator*(const F64& scalar){
        return { x * scalar, y * scalar };
    }
    Vector2 Vector2::operator*=(const F64& scalar){
        x *= scalar;
        y *= scalar;
        return *this;
    }
    F64 Vector2::operator*(const Vector2& vec){
        return x * vec.x + y * vec.y;
    }
    Vector2 Vector2::operator/(const F64& scalar){
        return { x / scalar, y / scalar };
    }
    Vector2 Vector2::operator/=(const F64& scalar){
        x /= scalar;
        y /= scalar;
        return *this;
    }

    Bool Vector2::operator==(const Vector2& vec) const{
        return
            std::abs(x - vec.x) < 0.001 && 
            std::abs(y - vec.y) < 0.001;
    }
    Vector2 operator*(const F64& scalar, const Vector2& vec){
        return { vec.x * scalar, vec.y * scalar }; 
    }
    Vector2 operator*=(const F64& scalar, Vector2& vec){
        vec.x *= scalar;
        vec.y *= scalar;
        return vec;
    }
    std::ostream& operator<<(std::ostream& stream, const Vector2& vec){ 
        stream << "{" << vec.x << ", " << vec.y << "}"; 
        return stream;
    }
    // ************************************************************************
    // Vector3 ****************************************************************
    // ************************************************************************
    Vector3::Vector3(){
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }
    Vector3::Vector3(const Vector3& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
    }
    Vector3::Vector3(const Vector2& vec, const F64& z1){
        x = vec.x;
        y = vec.y;
        z = z1;
    }
    Vector3::Vector3(const F64& x1, const Vector2& vec){
        x = x1;
        y = vec.x;
        z = vec.y;
    }
    Vector3::Vector3(const F64& x1, const F64& y1, const F64& z1){
        x = x1;
        y = y1;
        z = z1;
    }
    Vector3::Vector3(const Vector2& vec){
        x = vec.x;
        y = vec.y;
        z = 0.0;
    }
    Vector3::Vector3(const Vector4& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
    }
    F64 Vector3::operator[](const U32& index){
        if(index > SIZE - 1) throw std::out_of_range("Vector2 out of range");
        switch(index){
            case 0:
                return x;
            case 1:
                return y;
            case 2:
                return z;
            default:
                throw std::out_of_range("Unknown Vector2 index");
        }
    }
    const F64 Vector3::operator[](const U32& index) const {
        if(index > SIZE - 1) throw std::out_of_range("Vector2 out of range");
        switch(index){
            case 0:
                return x;
            case 1:
                return y;
            case 2:
                return z;
            default:
                throw std::out_of_range("Unknown Vector2 index");
        }
    }

    Vector3 Vector3::operator=(const Vector3& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        return *this;
    }

    Vector3 Vector3::operator+(const Vector3& vec){
        return { x + vec.x, y + vec.y, z + vec.z};
    }
    Vector3 Vector3::operator+=(const Vector3& vec){
        x += vec.x;
        y += vec.y;
        z += vec.z;
        return *this;
    }
    Vector3 Vector3::operator-(const Vector3& vec){
        return { x - vec.x, y - vec.y, z - vec.z };
    }
    Vector3 Vector3::operator-=(const Vector3& vec){
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
        return *this;
    }
    Vector3 Vector3::operator*(const F64& scalar){
        return { x * scalar, y * scalar, z * scalar};
    }
    Vector3 Vector3::operator*=(const F64& scalar){
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }
    F64 Vector3::operator*(const Vector3& vec){
        return x * vec.x + y * vec.y + z * vec.z;
    }
    Vector3 Vector3::operator/(const F64& scalar){
        return { x / scalar, y / scalar, z / scalar };
    }
    Vector3 Vector3::operator/=(const F64& scalar){
        x /= scalar;
        y /= scalar;
        z /= scalar;
        return *this;
    }

    Bool Vector3::operator==(const Vector3& vec) const{
        return
            std::abs(x - vec.x) < 0.001 && 
            std::abs(y - vec.y) < 0.001 && 
            std::abs(z - vec.z) < 0.001;
    }
    Vector3 operator*(const F64& scalar, const Vector3& vec){
        return { vec.x * scalar, vec.y * scalar, vec.z * scalar }; 
    }
    Vector3 operator*=(const F64& scalar, Vector3& vec){
        vec.x *= scalar;
        vec.y *= scalar;
        vec.z *= scalar;
        return vec;
    }
    std::ostream& operator<<(std::ostream& stream, const Vector3& vec){ 
        stream << "{" << vec.x << ", " << vec.y << ", " << vec.z << "}"; 
        return stream;
    }

    // ************************************************************************
    // Vector4 ****************************************************************
    // ************************************************************************
    Vector4::Vector4(){
        x = 0.0;
        y = 0.0;
        z = 0.0;
        w = 0.0;
    }
    Vector4::Vector4(const Vector4& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = vec.w;
    }
    Vector4::Vector4(const Vector3& vec, const F64& w1){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = w1;
    }
    Vector4::Vector4(const F64& x1, const Vector3& vec){
        x = x1;
        y = vec.x;
        z = vec.y;
        w = vec.z;
    }
    Vector4::Vector4(const Vector2& vec, const F64& z1, const F64& w1){
        x = vec.x;
        y = vec.y;
        z = z1;
        w = w1;
    }
    Vector4::Vector4(const F64& x1, const Vector2& vec, const F64& w1){
        x = x1;
        y = vec.x;
        z = vec.y;
        w = w1;
    }
    Vector4::Vector4(const F64& x1, const F64& y1, const Vector2& vec){
        x = x1;
        y = y1;
        z = vec.x;
        w = vec.y;
    }
    Vector4::Vector4(const F64& x1, const F64& y1, const F64& z1, const F64& w1){
        x = x1;
        y = y1;
        z = z1;
        w = w1;
    }
    Vector4::Vector4(const Vector2& vec){
        x = vec.x;
        y = vec.y;
        z = 0.0;
        w = 0.0;
    }
    Vector4::Vector4(const Vector3& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = 0.0;
    }
    F64 Vector4::operator[](const U32& index){
        if(index > SIZE - 1) throw std::out_of_range("Vector2 out of range");
        switch(index){
            case 0:
                return x;
            case 1:
                return y;
            case 2:
                return z;
            case 3:
                return w;
            default:
                throw std::out_of_range("Unknown Vector2 index");
        }
    }
    const F64 Vector4::operator[](const U32& index) const {
        if(index > SIZE - 1) throw std::out_of_range("Vector2 out of range");
        switch(index){
            case 0:
                return x;
            case 1:
                return y;
            case 2:
                return z;
            case 3:
                return w;
            default:
                throw std::out_of_range("Unknown Vector2 index");
        }
    }

    Vector4 Vector4::operator=(const Vector4& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = vec.w;
        return *this;
    }

    Vector4 Vector4::operator+(const Vector4& vec){
        return { x + vec.x, y + vec.y, z + vec.z, w + vec.w};
    }
    Vector4 Vector4::operator+=(const Vector4& vec){
        x += vec.x;
        y += vec.y;
        z += vec.z;
        w += vec.w;
        return *this;
    }
    Vector4 Vector4::operator-(const Vector4& vec){
        return { x - vec.x, y - vec.y, z - vec.z, w - vec.w };
    }
    Vector4 Vector4::operator-=(const Vector4& vec){
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
        w -= vec.w;
        return *this;
    }
    Vector4 Vector4::operator*(const F64& scalar){
        return { x * scalar, y * scalar, z * scalar, w * scalar};
    }
    Vector4 Vector4::operator*=(const F64& scalar){
        x *= scalar;
        y *= scalar;
        z *= scalar;
        w *= scalar;
        return *this;
    }
    F64 Vector4::operator*(const Vector4& vec){
        return x * vec.x + y * vec.y + z * vec.z + w * vec.w;
    }
    Vector4 Vector4::operator/(const F64& scalar){
        return { x / scalar, y / scalar, z / scalar, w / scalar};
    }
    Vector4 Vector4::operator/=(const F64& scalar){
        x /= scalar;
        y /= scalar;
        z /= scalar;
        w /= scalar;
        return *this;
    }
    Bool Vector4::operator==(const Vector4& vec) const{
        return
            std::abs(x - vec.x) < 0.001 && 
            std::abs(y - vec.y) < 0.001 && 
            std::abs(z - vec.z) < 0.001 && 
            std::abs(w - vec.w) < 0.001; 
    }

    Vector4 operator*(const F64& scalar, const Vector4& vec){
        return { vec.x * scalar, vec.y * scalar, vec.z * scalar, vec.w * scalar }; 
    }
    Vector4 operator*=(const F64& scalar, Vector4& vec){
        vec.x *= scalar;
        vec.y *= scalar;
        vec.z *= scalar;
        vec.w *= scalar;
        return vec;
    }
    std::ostream& operator<<(std::ostream& stream, const Vector4& vec){ 
        stream << "{" << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << "}"; 
        return stream;
    }
}
