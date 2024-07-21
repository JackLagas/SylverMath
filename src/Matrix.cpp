#include "Matrix.hpp"
#include "Trig.hpp"


namespace Sylver::Math{
    Matrix4x4 Orthographic(
        const F64& left, const F64& right, 
        const F64& bottom, const F64& top,
        const F64& near, const F64& far
    ){
        Matrix4x4 result(
            Vector4((2.0 / (right - left)), 0.0, 0.0, 0.0),
            Vector4(0.0, (2.0 / (top - bottom)), 0.0, 0.0),
            Vector4(0.0, 0.0, -(2.0 / (far - near)), 0.0),
            Vector4(-((right + left) / (right - left)), -((top + bottom) / (top - bottom)), -((far + near) / (far - near)), 1.0)
        );
        return result;
    }
    Matrix4x4 Projection(
        const F64& angle, const F64& ratio,
        const F64& near, const F64& far
    ){
        
        F64 tanHalfAngle = Tan(angle / 2.0);
        Matrix4x4 result(
            Vector4(1.0 / (ratio * tanHalfAngle), 0.0, 0.0, 0.0),
            Vector4(0.0, 1.0 / tanHalfAngle, 0.0, 0.0),
            Vector4(0.0, 0.0, -(far + near) / (far - near), -(2.0 * far * near) / (far - near)),
            Vector4(0.0, 0.0, -1.0, 0.0)
        );
       return result;
    }
}