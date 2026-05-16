#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessnumber;
    cout<<"Enter the guess number"<<"="<<endl;
    cin>>guessnumber;

    int randomNumber = rand()%5 +1;

    if(randomNumber==guessnumber)
    {
        cout<<"You have win"<<endl<<endl;
    }
    else
    {
        cout<<"You have lose. Try agin"<<endl<<endl;
        cout<<"RandomNumber was"<<randomNumber<<endl<<endl;
    }
    }

}
