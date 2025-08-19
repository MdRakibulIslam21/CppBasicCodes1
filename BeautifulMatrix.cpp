/*
//just matrix input & output
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Row:"<<endl;
    cin>>row;
    cout<<"Col"<<endl;
    cin>>col;
    int matrix[row][col];
    cout<<"matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int mat[5][5];
    int row;
    int col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                row=i+1;
                col=j+1;
            }
        }
    }
    cout<<abs(row-3)+abs(col-3)<<endl;
}
