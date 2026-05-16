#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int marks[5];

    //intput
    for(int i=0;i<5;i++)
    {
        cout<<"Marks for student:"<<i+1<<"=";
        cin>>marks[i];

    }
    //output
    cout<<"Marks are:";
    for(int i=0;i<5;i++)
    {
        cout<<marks <<" ";
    }


    getch();
}

