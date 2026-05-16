#include<iostream>
#define row 3
#define col 5
using namespace std;


void print1DArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void print1DArrayRev(int arr[],int size){
	for(int i=size -1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void rev1DArray(int arr[],int size){
	for(int i=0;i<size/2;i++){
		int temp = arr[i];
		arr[i] = arr[size-1 -i];
		arr[size-1 -i] = temp;
	}
}

void print2DArray(int mat[][col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}


int main(){
	int numbers[10] = {11,12,1,2,3,4,5,6,7,0};

	print1DArray(numbers,10);
	rev1DArray(numbers,10);
	print1DArray(numbers,10);
	cout<<numbers[0]<<endl;


	int matA[row][col] = {{1,1,1},{2,2,2},{3,3,3}};
	int matB[row][col] = {};
	print2DArray(matA);
	print2DArray(matB);

return 0;
}

