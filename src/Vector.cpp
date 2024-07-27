#include "Vector.hpp"

#include <stdexcept>
#include <algorithm>

namespace Sylver::Math {

    // ************************************************************************
    // Vector<2, T> ****************************************************************
    // ************************************************************************
    template<typename T>
    Vector<2, T>::Vector(){
        x = 0.0;
        y = 0.0;
    }
    template<typename T>
    Vector<2, T>::Vector(const Vector<2, T>& vec){
        x = vec.x;
        y = vec.y;
    }
    template<typename T>
    Vector<2, T>::Vector(const T& x1, const T& y1){
        x = x1;
        y = y1;
    }
    template<typename T>
    Vector<2, T>::Vector(const Vector<3, T>& vec){
        x = vec.x;
        y = vec.y;
    }
    template<typename T>
    Vector<2, T>::Vector(const Vector<4, T>& vec){
        x = vec.x;
        y = vec.y;
    }


    template<typename T>
    Vector<2, T> Vector<2, T>::operator=(const Vector<2, T>& vec){
        x = vec.x;
        y = vec.y;
        return *this;
    }

    template<typename T>
    Vector<2, T> Vector<2, T>::operator+(const Vector<2, T>& vec){
        return { x + vec.x, y + vec.y };
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator+=(const Vector<2, T>& vec){
        x += vec.x;
        y += vec.y;
        return *this;
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator-(const Vector<2, T>& vec){
        return { x - vec.x, y - vec.y };
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator-=(const Vector<2, T>& vec){
        x -= vec.x;
        y -= vec.y;
        return *this;
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator*(const T& scalar){
        return { x * scalar, y * scalar };
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator*=(const T& scalar){
        x *= scalar;
        y *= scalar;
        return *this;
    }
    template<typename T>
    T Vector<2, T>::operator*(const Vector<2, T>& vec){
        return x * vec.x + y * vec.y;
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator/(const T& scalar){
        return { x / scalar, y / scalar };
    }
    template<typename T>
    Vector<2, T> Vector<2, T>::operator/=(const T& scalar){
        x /= scalar;
        y /= scalar;
        return *this;
    }

    template<typename T>
    Bool Vector<2, T>::operator==(const Vector<2, T>& vec) const{
        return
            std::abs(x - vec.x) < 0.001 && 
            std::abs(y - vec.y) < 0.001;
    }
    Vector2<BASE_TYPE> operator*(const BASE_TYPE& scalar, const Vector2<BASE_TYPE>& vec){
        return { vec.x * scalar, vec.y * scalar }; 
    }
    Vector2<BASE_TYPE> operator*=(const BASE_TYPE& scalar, Vector2<BASE_TYPE>& vec){
        vec.x *= scalar;
        vec.y *= scalar;
        return vec;
    }
    std::ostream& operator<<(std::ostream& stream, const Vector2<BASE_TYPE>& vec){ 
        stream << "{" << vec.x << ", " << vec.y << "}"; 
        return stream;
    }
    // ************************************************************************
    // Vector<3, T> ****************************************************************
    // ************************************************************************
    template<typename T>
    Vector<3, T>::Vector(){
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }
    template<typename T>
    Vector<3, T>::Vector(const Vector<3, T>& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
    }
    template<typename T>
    Vector<3, T>::Vector(const Vector<2, T>& vec, const T& z1){
        x = vec.x;
        y = vec.y;
        z = z1;
    }
    template<typename T>
    Vector<3, T>::Vector(const T& x1, const Vector<2, T>& vec){
        x = x1;
        y = vec.x;
        z = vec.y;
    }
    template<typename T>
    Vector<3, T>::Vector(const T& x1, const T& y1, const T& z1){
        x = x1;
        y = y1;
        z = z1;
    }
    template<typename T>
    Vector<3, T>::Vector(const Vector<2, T>& vec){
        x = vec.x;
        y = vec.y;
        z = 0.0;
    }
    template<typename T>
    Vector<3, T>::Vector(const Vector<4, T>& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
    }

    template<typename T>
    Vector<3, T> Vector<3, T>::operator=(const Vector<3, T>& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        return *this;
    }

    template<typename T>
    Vector<3, T> Vector<3, T>::operator+(const Vector<3, T>& vec){
        return { x + vec.x, y + vec.y, z + vec.z};
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator+=(const Vector<3, T>& vec){
        x += vec.x;
        y += vec.y;
        z += vec.z;
        return *this;
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator-(const Vector<3, T>& vec){
        return { x - vec.x, y - vec.y, z - vec.z };
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator-=(const Vector<3, T>& vec){
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
        return *this;
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator*(const T& scalar){
        return { x * scalar, y * scalar, z * scalar};
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator*=(const T& scalar){
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }
    template<typename T>
    T Vector<3, T>::operator*(const Vector<3, T>& vec){
        return x * vec.x + y * vec.y + z * vec.z;
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator/(const T& scalar){
        return { x / scalar, y / scalar, z / scalar };
    }
    template<typename T>
    Vector<3, T> Vector<3, T>::operator/=(const T& scalar){
        x /= scalar;
        y /= scalar;
        z /= scalar;
        return *this;
    }

    template<typename T>
    Bool Vector<3, T>::operator==(const Vector<3, T>& vec) const{
        return
            std::abs(x - vec.x) < 0.001 && 
            std::abs(y - vec.y) < 0.001 && 
            std::abs(z - vec.z) < 0.001;
    }
    Vector3<BASE_TYPE> operator*(const BASE_TYPE& scalar, const Vector3<BASE_TYPE>& vec){
        return { vec.x * scalar, vec.y * scalar, vec.z * scalar }; 
    }
    Vector3<BASE_TYPE> operator*=(const BASE_TYPE& scalar, Vector3<BASE_TYPE>& vec){
        vec.x *= scalar;
        vec.y *= scalar;
        vec.z *= scalar;
        return vec;
    }
    std::ostream& operator<<(std::ostream& stream, const Vector3<BASE_TYPE>& vec){ 
        stream << "{" << vec.x << ", " << vec.y << ", " << vec.z << "}"; 
        return stream;
    }

    // ************************************************************************
    // Vector<4, T> ****************************************************************
    // ************************************************************************
    template<typename T>
    Vector<4, T>::Vector(){
        x = 0.0;
        y = 0.0;
        z = 0.0;
        w = 0.0;
    }
    template<typename T>
    Vector<4, T>::Vector(const Vector<4, T>& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = vec.w;
    }
    template<typename T>
    Vector<4, T>::Vector(const Vector<3, T>& vec, const T& w1){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = w1;
    }
    template<typename T>
    Vector<4, T>::Vector(const T& x1, const Vector<3, T>& vec){
        x = x1;
        y = vec.x;
        z = vec.y;
        w = vec.z;
    }
    template<typename T>
    Vector<4, T>::Vector(const Vector<2, T>& vec, const T& z1, const T& w1){
        x = vec.x;
        y = vec.y;
        z = z1;
        w = w1;
    }
    template<typename T>
    Vector<4, T>::Vector(const T& x1, const Vector<2, T>& vec, const T& w1){
        x = x1;
        y = vec.x;
        z = vec.y;
        w = w1;
    }
    template<typename T>
    Vector<4, T>::Vector(const T& x1, const T& y1, const Vector<2, T>& vec){
        x = x1;
        y = y1;
        z = vec.x;
        w = vec.y;
    }
    template<typename T>
    Vector<4, T>::Vector(const T& x1, const T& y1, const T& z1, const T& w1){
        x = x1;
        y = y1;
        z = z1;
        w = w1;
    }
    template<typename T>
    Vector<4, T>::Vector(const Vector<2, T>& vec){
        x = vec.x;
        y = vec.y;
        z = 0.0;
        w = 0.0;
    }
    template<typename T>
    Vector<4, T>::Vector(const Vector<3, T>& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = 0.0;
    }

    template<typename T>
    Vector<4, T> Vector<4, T>::operator=(const Vector<4, T>& vec){
        x = vec.x;
        y = vec.y;
        z = vec.z;
        w = vec.w;
        return *this;
    }

    template<typename T>
    Vector<4, T> Vector<4, T>::operator+(const Vector<4, T>& vec){
        return { x + vec.x, y + vec.y, z + vec.z, w + vec.w};
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator+=(const Vector<4, T>& vec){
        x += vec.x;
        y += vec.y;
        z += vec.z;
        w += vec.w;
        return *this;
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator-(const Vector<4, T>& vec){
        return { x - vec.x, y - vec.y, z - vec.z, w - vec.w };
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator-=(const Vector<4, T>& vec){
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
        w -= vec.w;
        return *this;
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator*(const T& scalar){
        return { x * scalar, y * scalar, z * scalar, w * scalar};
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator*=(const T& scalar){
        x *= scalar;
        y *= scalar;
        z *= scalar;
        w *= scalar;
        return *this;
    }
    template<typename T>
    T Vector<4, T>::operator*(const Vector<4, T>& vec){
        return x * vec.x + y * vec.y + z * vec.z + w * vec.w;
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator/(const T& scalar){
        return { x / scalar, y / scalar, z / scalar, w / scalar};
    }
    template<typename T>
    Vector<4, T> Vector<4, T>::operator/=(const T& scalar){
        x /= scalar;
        y /= scalar;
        z /= scalar;
        w /= scalar;
        return *this;
    }
    template<typename T>
    Bool Vector<4, T>::operator==(const Vector<4, T>& vec) const{
        return
            std::abs(x - vec.x) < 0.001 && 
            std::abs(y - vec.y) < 0.001 && 
            std::abs(z - vec.z) < 0.001 && 
            std::abs(w - vec.w) < 0.001; 
    }

    Vector4<BASE_TYPE> operator*(const BASE_TYPE& scalar, const Vector4<BASE_TYPE>& vec){
        return { vec.x * scalar, vec.y * scalar, vec.z * scalar, vec.w * scalar }; 
    }
    Vector4<BASE_TYPE> operator*=(const BASE_TYPE& scalar, Vector4<BASE_TYPE>& vec){
        vec.x *= scalar;
        vec.y *= scalar;
        vec.z *= scalar;
        vec.w *= scalar;
        return vec;
    }
    std::ostream& operator<<(std::ostream& stream, const Vector4<BASE_TYPE>& vec){ 
        stream << "{" << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << "}"; 
        return stream;
    }
}
