#include<iostream>
using namespace std;

int main()
{
    int marks [2][3]={{15,18,17},{14,15,20}};
    int i,j;

    for(int i=0;i<2;i++)
    {
        cout<<"Marks "<<i+1;
        cout<<endl;

        for(int j=0;j<3;j++)
        {
            cout<<marks[i][j]<<"  ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<2;i++)
    {

        for(int j=0;j<3;j++)
        {
            sum=sum+marks[i][j];

        }
        cout<<sum<<" ";
        sum=0;
    }


}
