#include "myfirstclass.h"
#include<iostream>
using namespace std;

Myfirstclass::Myfirstclass()
{
    cout<<"constructor is call"<<endl;
}
Myfirstclass::~Myfirstclass()
{
    cout<<"distructor is call"<<endl;
}
void Myfirstclass::display()
{
    cout<<"display is call"<<endl;
}
