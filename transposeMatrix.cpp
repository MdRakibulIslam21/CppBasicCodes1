#include<iostream>
using namespace std;

int main()
{
    int A[10][10];
    int tps[10][10];
    int i,j,r1,c1;

    cout<<"Enter a number of rows :"<<endl;
    cin>>r1;
    cout<<"Enter a number of cols :"<<endl;
    cin>>c1;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]";
            cin>>A[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           tps[j][i]= A[i][j];
        }
    }

    cout<<"Transpose Matrix is: "<<endl;
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            cout<<tps[i][j]<<" ";
        }
        cout<<endl;
    }

}
