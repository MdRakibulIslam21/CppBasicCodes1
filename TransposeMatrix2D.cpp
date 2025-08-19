#include <iostream>
using namespace std;

class Arr2D {
public:
    int row;
    int col;
    int** mat;


    Arr2D(int row, int col) {
        this->row = row;
        this->col = col;
        mat = new int*[row];
        for (int r = 0; r < row; r++) {
            mat[r] = new int[col];
            for (int c = 0; c < col; c++) {
                mat[r][c] = 0;
            }
        }
    }


    void print2D() {
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                cout << mat[r][c] << " ";
            }
            cout << endl;
        }
    }


    Arr2D transpose() {
        Arr2D transposed(col, row);
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                transposed.mat[c][r] = mat[r][c];
            }
        }
        return transposed;
    }
};

int main() {
    Arr2D matA(5, 4);
    matA.mat[0][0] = 2;
    matA.mat[0][1] = 3;
    matA.mat[0][2] = 5;
    matA.mat[0][3] = 6;
    matA.mat[0][4] = 9;

    matA.mat[1][0] = 4;
    matA.mat[1][1] = 7;
    matA.mat[1][2] = 6;
    matA.mat[1][3] = 5;
    matA.mat[1][4] = 3;

    matA.mat[2][0] = 4;
    matA.mat[2][1] = 7;
    matA.mat[2][2] = 6;
    matA.mat[2][3] = 5;
    matA.mat[2][4] = 3;

    matA.mat[3][0] = 4;
    matA.mat[3][1] = 7;
    matA.mat[3][2] = 6;
    matA.mat[3][3] = 5;
    matA.mat[3][4] = 3;


    cout << "Matrix A:" << endl;
    matA.print2D();

    Arr2D transposedMat = matA.transpose();
    cout << "Transpose matrix:" << endl;
    transposedMat.print2D();


    return 0;
}
