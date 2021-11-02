// Matrix.h
#pragma once
using namespace std;

class Matrix
{
private:
    int rows;
    int cols;
    int** matrix;
public:
    Matrix(const int& rows, const int& cols);
    Matrix(const Matrix& other);
    ~Matrix();
    int*& operator[](const int& index) const;
    void operator=(const Matrix& otherM)const;
    Matrix operator+(const Matrix& t)const;

    // equals operator
    bool operator==(const Matrix& mat) const;
    // not equal operator
    bool operator!=(const Matrix& mat) const;

    friend Matrix operator+(const int& num, const Matrix& t);
    friend int Norma(const Matrix& t);
    friend ostream& operator<<(ostream& os, const Matrix& m);
};