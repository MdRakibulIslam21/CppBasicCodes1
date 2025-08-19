#include<iostream>
using namespace std;

class Arr2D
{
public:
    int row;
    int col;
    int** mat;

    Arr2D(int row,int col){
        this-> row;
        this-> col;
         mat = new int*[row];
        for(int r = 0;r<row;r++){
            mat[r]=new int[col];
        }
        for(int c = 0;c<col;c++){
            mat[r][c]= 0;
        }

    }
    void print2D(){
        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                cout<<mat[r][c]<<" ";
            }
            cout<<endl;
        }

    }
};
int main()
{
    int A[3][3];
    //int B[][];

    cin>>A[3][3];
}
