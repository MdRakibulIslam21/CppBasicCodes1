#include<iostream>
using namespace std;

void display(int *num)
{
    * num=20;
}
int main()
{
    int x=10;
    cout<<x<<endl;
    display(&x);
    cout<<x;
}
