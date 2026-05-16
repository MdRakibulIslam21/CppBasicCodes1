#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a=10,b=20;
    float c=4.5;
    b=c;
    cout<<b<<endl;
    c=b*0.5;
    cout<<c<<endl;
    c=a/(float)b;//type casting
    cout<<c<<endl;


    getch();


}
