

#include<iostream>
using namespace std;

int main()
{
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int i,j,n1,n2;
    cout<<"Enter a num of rows :"<<endl;
    cin>>n1;
    cout<<"Enter a num of cols :"<<endl;
    cin>>n2;

    cout<<"Enter a element of A matrix :"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]";
            cin>>A[i][j];
        }
    }
    cout<<"A ="<<endl;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;

    }cout<<"Enter a element of B matrix :"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]";
            cin>>B[i][j];
        }
    }
    cout<<"B ="<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<endl;

    cout<<"Addition of matrix :"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
           cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
       for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    cout<<endl;

    cout<<"Sub of matrix :"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
           cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
