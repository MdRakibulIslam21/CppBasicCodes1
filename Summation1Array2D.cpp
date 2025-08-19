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


    int sum1() {
        int sum = 0;
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                sum += mat[r][c];
            }
        }
        return sum;
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


    int totalSum = matA.sum1();
    cout << "The sum  is: " << totalSum << endl;

    return 0;
}
