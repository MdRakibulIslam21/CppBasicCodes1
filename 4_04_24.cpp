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

//for find column and row number among given user input
int num;
cout<<"please enter number to find the column and row number"<<endl;
cin>>num;
for (int i=0; i<5; i++)
{
    for (int j=0; j<8; j++)
    {
     if (num==arr[i][j])
     {
         cout<<"The row number is"<<arr[i][0]<<"The column number is"<<arr[0][j];
     }
    }

}




return 0;
}
