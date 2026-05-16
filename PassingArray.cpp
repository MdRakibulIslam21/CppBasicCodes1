#include<iostream>
using namespace std;

void displayArray(int num[],int arraysize)
{
    for(int i=0;i<arraysize;i++)
    {
        cout<<num[i]<<" ";
    }
}
int main()
{
    int num[5]={10,20,30,40,50};
    displayArray(num,5);
}
