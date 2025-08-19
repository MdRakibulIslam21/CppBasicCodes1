


#include<iostream>
using namespace std;

int main()
{
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int r1,c1,r2,c2,sum=0,i,j,k;
    int result[10][10];
    cout<<"Enter a num of rows :"<<endl;
    cin>>r1;
    cout<<"Enter a num of cols :"<<endl;
    cin>>c1;
    cout<<"Enter a num of rows :"<<endl;
    cin>>r2;
    cout<<"Enter a num of cols :"<<endl;
    cin>>c2;

    cout<<"Enter a element of A matrix :"<<endl;
    for( i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]";
            cin>>A[i][j];
        }
    }
    cout<<"A ="<<endl;

    for( i=0;i<r1;i++)
    {
        for( j=0;j<c1;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;

    }cout<<"Enter a element of B matrix :"<<endl;
    for( i=0;i<r2;i++)
    {
        for( j=0;j<c2;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]";
            cin>>B[i][j];
        }
    }
    cout<<"B ="<<endl;
    for( i=0;i<r2;i++)
    {
        for( j=0;j<c2;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
     }
       for( i=0;i<r1;i++)
    {
        for( j=0;j<c2;j++)
        {
            for( k=0;k<c1;k++)
            {
               sum= sum+ A[i][k]* B[k][j];

            }
               result[i][j]=sum;
               sum=0;
        }
    }
    cout<<endl;

    cout<<"Result of matrix :"<<endl;
    for( i=0;i<r1;i++)
    {
        for( j=0;j<c1;j++)
        {
           cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
