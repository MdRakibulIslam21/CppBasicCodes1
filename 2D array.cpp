
#include<iostream>
using namespace std;

int main()
{
    int a[2][3];
    cout<<"Enter the value of array :"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int k=0;k<3;k++)
        {
            cout<<"Enter the element position :"<<endl;
            cin>>a[i][k];
        }
        cout<<endl;
    }
    cout<<"The value of 2D array :"<<endl;
   for(int i=0;i<2;i++)
    {
        for(int k=0;k<3;k++)
        {
            cout<<a[i][k];
        }
        cout<<endl;
    }
    return 0;
}
