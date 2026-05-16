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

        for (int r = 0; r < row; r++)
            {
            mat[r] = new int[col];
            for (int c = 0; c < col; c++)
            {
                mat[r][c] = 0;
             }
        }
    }


    void print2D() {
        for (int r = 0; r < row; r++)
            {
            for (int c = 0; c < col; c++)
             {
                cout << mat[r][c] << " ";
            }
            cout << endl;
        }
    }


    Arr2D multiply(const Arr2D& matB)
     {
        Arr2D result(row, matB.col);
        for (int i = 0; i < row; i++)
            {
            for (int j = 0; j < matB.col; j++)
            {
                int sum = 0;
                for (int k = 0; k < col; k++)
                 {
                    sum += mat[i][k] * matB.mat[k][j];
                }
                result.mat[i][j] = sum;
            }
        }
        return result;
    }
};

int main() {
    Arr2D matA(3, 3);
    matA.mat[0][0] = 2;
    matA.mat[0][1] = 3;
    matA.mat[0][2] = 5;

    matA.mat[1][0] = 6;
    matA.mat[1][1] = 9;
    matA.mat[1][2] = 4;

    matA.mat[2][0] = 7;
    matA.mat[2][1] = 6;
    matA.mat[2][2] = 5;

    cout << "Matrix A:" << endl;
    matA.print2D();

    Arr2D matB(3, 3);
    matB.mat[0][0] = 3;
    matB.mat[0][1] = 9;
    matB.mat[0][2] = 8;

    matB.mat[1][0] = 5;
    matB.mat[1][1] = 3;
    matB.mat[1][2] = 1;

    matB.mat[2][0] = 2;
    matB.mat[2][1] = 9;
    matB.mat[2][2] = 6;

    cout << endl << "Matrix B:" << endl;
    matB.print2D();
    cout << endl;


    Arr2D matC = matA.multiply(matB);
    cout << "Matrix A * Matrix B:" << endl;
    matC.print2D();


    return 0;
}
