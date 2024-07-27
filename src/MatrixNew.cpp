#include <MatrixNew.hpp>

#include <format>


namespace Sylver::Math{

    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T>::Matrix(){
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                m_Values[i][j] = T();
            }
        }
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T>::Matrix(const Matrix<L, W, T>& mat){
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                m_Values[i][j] = mat[i][j];
            }
        }
    }


    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::Identity(T value){
        auto result = Matrix<L, W, T>();
        U32 i = 0;
        while(i < L && i < W){
            result[i][i] = value;
            i++;
        }
        return result;
    }


    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator*(const T& scalar){
        Matrix<L, W, T> result;
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                result[i][j] = m_Values[i][j] * scalar;  
            }
        }
        return result;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator*=(const T& scalar){
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                m_Values[i][j] *= scalar;  
            }
        }
        return *this;
    }

    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator/(const T& scalar){
        Matrix<L, W, T> result;
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                result[i][j] = m_Values[i][j] / scalar;  
            }
        }
        return result;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator/=(const T& scalar){
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                m_Values[i][j] /= scalar;  
            }
        }
        return *this;
    }

    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator+(const Matrix<L, W, T>& mat){
        Matrix<L, W, T> result;
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                result[i][j] = m_Values[i][j] + mat[i][j];  
            }
        }
        return result;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator+=(const Matrix<L, W, T>& mat){
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                m_Values[i][j] += mat[i][j];  
            }
        }
        return *this;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator-(const Matrix<L, W, T>& mat){
        Matrix<L, W, T> result;
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                result[i][j] = m_Values[i][j] - mat[i][j];  
            }
        }
        return result;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> Matrix<L, W, T>::operator-=(const Matrix<L, W, T>& mat){
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                m_Values[i][j] -= mat[i][j];  
            }
        }
        return *this;
    }

    template<std::size_t L, std::size_t W, typename T>
    const Bool Matrix<L, W, T>::operator==(const Matrix<L, W, T>& mat) const{
        for(U32 i = 0; i < L; i++){
            if(m_Values[i] != mat[i]){
                return false;
            }
        }
        return true;
    }
    template<std::size_t L, std::size_t W, typename T>
    Matrix<L, W, T> operator*(const T& scalar, const Matrix<L, W, T>& mat){
        Matrix<L, W, T> result;
        for(U32 i = 0; i < L; i++){
            for(U32 j = 0; j < W; j++){
                result[i][j] = mat[i][j] * scalar;  
            }
        }
        return result;
    }
}
