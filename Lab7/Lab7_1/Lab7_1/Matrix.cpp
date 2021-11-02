// Matrix.cpp
#include <iostream>
#include<assert.h>
#include "Matrix.h"

using namespace std;

// конструктор ініціалізації
Matrix::Matrix(const int& rows, const int& cols) //constructor of class Matrix
{
    this->rows = rows;
    this->cols = cols;
    matrix = new int* [cols];
    assert(matrix);
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
        assert(matrix[i]);
    }
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = 0;
}

// конструктор копіювання
Matrix::Matrix(const Matrix& other)
{
    this->cols = other.cols;
    this->rows = other.rows;
    this->matrix = new int* [other.rows];
    assert(this->matrix);
    for (int i = 0; i < other.rows; i++)
    {
        this->matrix[i] = new int[other.cols];
        assert(this->matrix[i]);
    }
    for (int i = 0; i < other.rows; i++)
        for (int j = 0; j < other.cols; j++)
            this->matrix[i][j] = other[i][j];
}

// деструктор
Matrix::~Matrix()
{
    for (int i = 0; i < this->rows; i++)
        delete[] this->matrix[i];
    delete[] this->matrix;

}

// ініціалізація операції []
int*& Matrix::operator [](const int& index) const
{
    return matrix[index];
}

// ініціалізація операції присвоєння
void Matrix::operator=(const Matrix& otherM)const
{
    if (this->matrix != otherM.matrix 
        && this->cols == otherM.cols 
        && this->rows == otherM.rows)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                this->matrix[i][j] = otherM.matrix[i][j];
    }
}

// ініціалізація операції порівняння матриць
bool Matrix::operator==(const Matrix& mat) const
{
    if (this->rows != mat.rows || this->cols != mat.cols)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < this->rows; i++)
        {
            for (int j = 0; j < this->cols; j++)
            {
                if (this->matrix[i][j] != mat.matrix[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
}

// ініціалізація операції порівняння матриць
bool Matrix::operator!=(const Matrix& mat) const
{
    if (this->rows != mat.rows || this->cols != mat.cols)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < this->rows; i++)
        {
            for (int j = 0; j < this->cols; j++)
            {
                if (this->matrix[i][j] != mat.matrix[i][j])
                {
                    return true;
                }
            }
        }
        return false;
    }
}

// ініціалізація операції + матриць
Matrix  Matrix::operator +(const Matrix& t)const  //add 2 matrix
{
    Matrix temp(this->rows, this->cols);
    if (this->rows != t.rows || this->cols != t.cols)
    {
        for (int i = 0; i < this->rows; i++)
            for (int j = 0; j < this->cols; j++)
                temp.matrix[i][j] = this->matrix[i][j];
        return temp;
    }
    else
    {
        for (int i = 0; i < this->rows; i++)
            for (int j = 0; j < this->cols; j++)
                temp.matrix[i][j] += t.matrix[i][j] + this->matrix[i][j];
    }
    return temp;
}

// функція для знаходження норми матриці
int Norma(const Matrix& t)
{
    int sum, norm = 0;

    for(int k = 0; k < t.cols; k++) {
        int max = abs(t.matrix[0][k]);
        for (int l = 1; l < t.rows; l++) {
            if (max < abs(t.matrix[l][k]))
                max = abs(t.matrix[l][k]);
        }
        norm += max;
    }
    return norm;
}

// перезавантаження операції введення
ostream& operator <<(ostream& os, const Matrix& m)
{
    for (int i = 0; i < m.rows; i++)
    {
        for (int j = 0; j < m.cols; j++)
            cout << m.matrix[i][j] << "  ";
        cout << endl;
    }
    return os;
}