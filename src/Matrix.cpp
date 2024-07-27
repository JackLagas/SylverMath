#include "Matrix.hpp"
#include "Trig.hpp"


namespace Sylver::Math{
    Matrix4x4 Orthographic(
        const BASE_TYPE& left, const BASE_TYPE& right, 
        const BASE_TYPE& bottom, const BASE_TYPE& top,
        const BASE_TYPE& near, const BASE_TYPE& far
    ){
        Matrix4x4 result(
            Vector4<>((2.0 / (right - left)), 0.0, 0.0, 0.0),
            Vector4<>(0.0, (2.0 / (top - bottom)), 0.0, 0.0),
            Vector4<>(0.0, 0.0, -(2.0 / (far - near)), 0.0),
            Vector4<>(-((right + left) / (right - left)), -((top + bottom) / (top - bottom)), -((far + near) / (far - near)), 1.0)
        );
        return result;
    }
    Matrix4x4 Projection(
        const BASE_TYPE& angle, const BASE_TYPE& ratio,
        const BASE_TYPE& near, const BASE_TYPE& far
    ){
        
        BASE_TYPE tanHalfAngle = Tan(angle / 2.0);
        Matrix4x4 result(
            Vector4<>(1.0 / (ratio * tanHalfAngle), 0.0, 0.0, 0.0),
            Vector4<>(0.0, 1.0 / tanHalfAngle, 0.0, 0.0),
            Vector4<>(0.0, 0.0, -(far + near) / (far - near), -(2.0 * far * near) / (far - near)),
            Vector4<>(0.0, 0.0, -1.0, 0.0)
        );
       return result;
    }
}
