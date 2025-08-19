#include<iostream>
using namespace std;

class Array2D{
public:
	int row;
	int col;
	int** mat;

	Array2D(int row,int col){
		this->row = row;
		this->col = col;
		mat = new int* [row];
		for(int r=0;r<row;r++){
			mat[r] = new int[col];
			for(int c=0;c<col;c++){
				mat[r][c] = 0;
			}
		}
	}

	void print2D(){
		for(int r=0;r<row;r++){
			for(int c=0;c<col;c++){
				cout<<mat[r][c]<<"\t";
			}
			cout<<endl;
		}
	}

	Array2D sum(Array2D matB){
		Array2D matAns(row,col);
		for(int r=0;r<row;r++){
			for(int c=0;c<col;c++){
				matAns.mat[r][c] = mat[r][c] + matB.mat[r][c];
			}
		}
	return matAns;
	}

	Array2D operator +(Array2D matB){
		Array2D matAns(row,col);
		for(int r=0;r<row;r++){
			for(int c=0;c<col;c++){
				matAns.mat[r][c] = mat[r][c] + matB.mat[r][c];
			}
		}
		return matAns;
	}

};

int main(){

	Array2D matA(3,3);
	matA.mat[0][0] = 2;
	matA.mat[0][1] = 4;
	matA.mat[0][2] = 2;

	matA.mat[1][0] = 6;
	matA.mat[1][1] = 8;
	matA.mat[1][2] = 2;

	matA.mat[2][0] = 2;
	matA.mat[2][1] = 7;
	matA.mat[2][2] = 8;
	matA.print2D();

	cout<<endl;
	Array2D matB(3,3);
	matB.mat[0][0] = 3;
	matB.mat[0][1] = 9;
	matB.mat[0][2] = 8;

	matB.mat[1][0] = 5;
	matB.mat[1][1] = 3;
	matB.mat[1][2] = 1;

	matB.mat[2][0] = 2;
	matB.mat[2][1] = 9;
	matB.mat[2][2] = 6;
	matB.print2D();

	cout<<endl;
	Array2D matAns = matA + matA;
	matAns.print2D();
return 0;
}
