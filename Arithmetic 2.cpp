#include<iostream>

#include<conio.h>

#include<iomanip>

 using namespace std;

 int main()
 {
     int num1,num2;

     cout<<noshowpoint;

     cout<<"Enter 2 numbers:";
     cin>>num1>>num2;

     cout<<noshowpoint;
     float sum =num1+num2;
     cout <<setw(20)<<"Sum is:"<<sum <<endl;

      cout<<noshowpoint;
    float sub = num1-num2;
     cout <<setw(20)<<"Subtraction is:"<<sub<<endl;

     cout<<noshowpoint;
     float mul =num1*num2;
     cout <<setw(20)<<"Multiplication is:"<<mul<<endl;

     cout<<showpoint;
     cout<<fixed;
     cout<<setprecision(2);
     double div =(float)num1/num2;//type casting
     cout<<setw(20)<<"Division is:"<<div<<endl;

     //int rem = num1%num2;
     //cout <<"Remainder is :"<<rem<<endl;


     getch();
 }
