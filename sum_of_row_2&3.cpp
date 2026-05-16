#include<iostream>
using namespace std;
int main()
{
 int arr[5][8];

//for taking arry input from user
cout<<"Please value of 2d array elements";
for (int i=0; i<5; i++)
{
    for (int j=0; j<8; j++)
    {
     cin>> arr[i][j];
    }

}

// for showing output in matrix style ,which input was given by user
for (int i=0; i<5; i++)
{
    for (int j=0; j<8; j++)
    {
     cout<< arr[i][j]<<" ";
    }
cout<<endl;
}

//for adding row number 2 and 3;
int sum1=0;
int sum2=0;

cout<<"Sum of row 2 and  row 3 are given below"<<endl;

cout<<"sum of row 2";
for (int i=0; i<5; i++)
{
    for (int j=0; j<8; j++)
    {
        sum1=sum1+arr[1][j];


    }

}
cout<<"The sum is"<<sum1;


cout<<"sum of row 3";
for (int i=0; i<5; i++)
{
    for (int j=0; j<8; j++)
    {
        sum2=sum2+arr[2][j];


    }

}

 cout<<"The sum is"<<sum1;

return 0;
}
