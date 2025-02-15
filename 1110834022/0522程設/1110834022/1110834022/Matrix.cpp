#include "Matrix.h"

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;

    // 動態配置mxn的二維陣列element之記憶體
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

Matrix::Matrix(char name, int m, int n) {
    row = m;
    column = n;

    // 動態配置mxn的二維陣列element之記憶體
    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];

    cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << name << '[' << i << "][" << j << "]=";
            cin >> element[i][j];
        }
}

Matrix Matrix::operator+(Matrix x) {
    Matrix temp(this->row, this->column);
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            temp.element[i][j] = this->element[i][j] + x.element[i][j];

    return temp;
}

Matrix Matrix::operator^(Matrix x) {
    Matrix temp(this->row, this->column);
    for (int i = 0; i < this->row; i++)
        for (int j = 0; j < this->column; j++)
            temp.element[i][j] = std::max(this->element[i][j], x.element[i][j]);

    return temp;
}
