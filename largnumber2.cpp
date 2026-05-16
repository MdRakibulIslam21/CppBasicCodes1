<<<<<<< HEAD
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1,num2,num3,large;
    cout<<"Enter 3 number:";
    cin>>num1>>num2>>num3;

    if(num1>num2&&num1>num3)
    {
        large = num1;
    }else if(num2>num1&&num2>num3)
    {
        large = num2;
    }else{
        large = num3;
    }
    cout<<"Large number:"<<large;




    getch();
}

=======
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1,num2,num3,large;
    cout<<"Enter 3 number:";
    cin>>num1>>num2>>num3;

    if(num1>num2&&num1>num3)
    {
        large = num1;
    }else if(num2>num1&&num2>num3)
    {
        large = num2;
    }else{
        large = num3;
    }
    cout<<"Large number:"<<large;




    getch();
}

>>>>>>> 652974fecab155fcc26a5b237e85b45e659c0845
