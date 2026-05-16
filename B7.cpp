/*#include<iostream>
using namespace std;

int main()
{
 int mark[5],sum=0;
 for(int i=0;i<5;i++)
 {cout<<"Marks of student"<<"="<<i+1<<endl;
 cin>>mark[i];
 }
 for(int i=0;i<5;i++)
 {cout<<"Marks is:"<<mark[i]<<endl;
 sum=sum+mark[i];
 }
 cout<<"Total mark:"<<sum<<endl;
 float avg=(float)sum/5;
 cout<<"Average:"<<avg;






  return 0;
}
*/
/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any num"<<"=";
    cin>>n;
    int x=n%2;
    switch(x)
    {
    case 0:
        cout<<"Num is even"<<endl;
        break;
    case 1:
                cout<<"Num is odd";
    }
    return 0;
}
*/

/*#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three number:"<<endl;
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3)
    {
        cout<<"the largest num is:"<<n1;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"the largest num is:"<<n2;

    }
    else{cout<<"the largest num is:"<<n3;}

    return 0;
}

*/


/*#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any letter:";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Vowell";
    }
    else if()
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int age[4];
    for(int i=0;i<4;i++)
    {
    cout<<"Enter the age of 4 people "<<i+1<<":";
    cin>>age[i];
    }
    int oldest_age=age[0];
    int youngest_age=age[0];

    for(int i=1;i<4;i++)
    {
        if(oldest_age<age[i])
        {
            oldest_age=age[i];

        }
        if(youngest_age>age[i])
        {
            youngest_age=age[i];
        }
    }
    cout<<"Oldest age:"<<oldest_age<<endl;
    cout<<"Youngest age:"<<youngest_age<<endl;

    return 0;


}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer:";
    cin>>num;
    if(num!=0)
    {
        if(num>0)
        {
            cout<<"The number is positive."<<endl;
        }
        else{cout<<"The number is negative."<<endl;}
    }
    else{cout<<"The number is 0 and it is neither positive or negative."<<endl; }

    cout<<"this"<<endl;

    return 0;
}
*/
/*

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[]="Linda";
    char b[]="jack";
    cout<<strcat(a,b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}



*/
/*#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    //cout<<"Enter a num";

    for(i=1;i>=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}



*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter num:";
    cin>>n;
    for(int i=1;i<=10;++i)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}

*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev=0;
    cout<<"enter num:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        rev=rem+(rev*10);
        n=n/10;

    }
    cout<<rem;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
   int  tn1=n1,tn2=n2;
    cout<<"enter two num:";
    cin>>n1>>n2;
    while(tn2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"GCD:"<<n1<<endl;
    int lcm=(tn1*tn2)/n1;
    cout<<"LCM:"<<lcm<<endl;

}
*/
/*#include<iostream>
using namespace std;
int main ()
{
int  i, n = 5, sum =0;
for ( i = 1; i <= n; i = i+1 ){
	sum = sum + i;
  cout<<sum<<endl;
}
return 0;

}
*/
/*#include<iostream>
using namespace std;
int main ()
    {
        int year;
        cout<<"enter the year:";
        cin>>year;
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            cout<<"Leap year";

        }
        else{cout<<"not leap year";}
    }
*/
/*#include<iostream>
using namespace std;
int main ()
{
    int n,sum=0,digit;
    cout<<"e any dig:";
    cin>>n;
    do{
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    while(n!=0);
        cout<<"s of di:"<<sum<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main ()
{
    int num,rem;
    cout<<"ent a num:";
    cin>>num;
    rem=num%2;
    if(rem==0)
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd";
    }
}
*/

/*
#include<iostream>
using namespace std;
int main ()
{
    int n,i,f1,f2,f3;
    cout<<"en any num:";
    cin>>n;
    f1=0;
    f2=1;
    i=1;
    while(i<n)
    {
        f3=f1+f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
        i++;
    }
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[]="Rakibul";
    int len=strlen(name);
    cout<< "length of string "<<len;

}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[]="Rakibul";
    char name2[10];
    int len=strlen(name1);
    cout<< "length of string "<<len<<endl;

    strcpy(name2,name1);
    cout<<"name2:"<<name2;

}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[]="Rakibul";
    char name2[]="Islam";
    strcat(name1,name2);
    cout<<name1;

}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[]="Rakibul";
    char name2[]="Islam";

    int value= strcmp(name1,name2);
    if(value==0)
        cout<<"strings are equal";
    else
        cout<<"strings are not equal";


}
*/
/*#include<iostream>
#include<cstring>
u#include <iostream>
using namespace std;
int main (void)
{
int u, v, temp;
cout<<"Please type in two nonnegative integers."<<endl;
cin>>u>>v;
while ( v != 0 ) {
temp = u % v;
u = v;
v = temp;
}
cout<<"Their greatest common divisor is "<< u;
return 0;
}sing namespace std;

int main()
{
    string name1="Rakibul";
    string name2="Islam";
    string name3;

    name3=name1;
    cout<<"name3:"<<name3;

}






*/
/*
#include <iostream>
using namespace std;
int main (void)
{
int u, v, temp;
cout<<"Please type in two nonnegative integers."<<endl;
cin>>u>>v;
int t1=u,t2=v;
while ( v != 0 ) {
temp = u % v;
u = v;
v = temp;
}
cout<<"Their greatest common divisor is "<< u<<endl;
int lcm=(t1*t2)/u;
cout<<"LCM:"<<lcm;
return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int num1=45;
    int num2=50;

    int *p1, *p2;

    p1=&num1;
    p2=&num2;


    int sum = *p1 + *P2;

    cout<<sum;
}
*/

/*

#include<iostream>
using namespace std;

void addition(int a, int b)
    {
        int sum = a+b;

        cout<<"Sum "<<"="<<sum<<endl;
    }

int main()
{
    addition(20,10);

    addition(20,30);

    addition(30,20);


}
*/


/*
#include<iostream>
using namespace std;

int main()
{
int mark[]={34,21,64,32,42,54};

  for(int i=6-1;i>=0;i--)
{
    cout<<mark[i];
}
}
*/


/*

#include<iostream>
using namespace std;

int main()
{
    int num [5];
    int sum =0,i;
    float avg;
    cout<<"Enter 5 number:";
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }

    for( i=0;i<5;i++)
    {
        sum = sum+ num[i];
        //avg = sum/5;

    }
    cout<<sum;
    //cout<<avg;


}

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int num[100],n,i,maxx;
    cout<<"How many numbers:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }

     maxx =num[0];
    for(i=1;i<n;i++)
    {
      if(maxx<num[i])
      maxx = num[i];
    }
    cout<<maxx;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p;
    p = &x;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
}
*/

/*#include<iostream>
using namespace std;

int main()
{
    int num1= 23;
    int num2= 33;

    int *p1,*p2;

    p1=&num1;
    p2=&num2;

   int sum=*p1+*p2;

    cout<<sum;

}
*/
/*#include<iostream>
using namespace std;

void rakib(int a, int b)
{
    int sum=a+b;
    cout<<"Sum= "<<sum<<endl;
}
int main()
{
    rakib(30,30);
    rakib(40,40);
    rakib(50,50);
}
*/

/*

#include<iostream>
using namespace std;

double addition(double , double);

int main()
{
    double result = addition(30.5,19.5);
    cout<<result;

}
double addition(double a, double b)
{
   double sum = a+b;
   return sum;
}
*/
/*
#include <iostream>
using namespace std;

int main() {

    // create a string
    string text1 = "C++";
    string text2 = "Programming";

    // join string
    string joined_string = text1 + text2;
    cout << joined_string << endl;

    cout << text1 + " " + text2;

    return 0;
}



    cout<<"Addition of matrix :"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
           cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
       for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    cout<<endl;

    cout<<"Sub of matrix :"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
           cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
*/
/*
#include <iostream>
using namespace std;
int main()
{
float mark,total1=0,total2=0,average1,average2;
float student[2][3];
for(int i=0;i<1;i++)
{      for(int j=0;j<3;j++)
       {cout<<"Enter mark of student 1: ";
       cin>>student[i][j];
       total1=total1+student[i][j];}
}
    average1=total1/3;
    cout<<"Average of marks of student 1: "<<average1<<endl;

for(int i=1;i<2;i++)
{      for(int j=0;j<3;j++)
       {cout<<"Enter mark of student 2: ";
       cin>>student[i][j];
       total2=total2+student[i][j];}
}
    average2=total2/3;
    cout<<"Average of marks of student 2: "<<average2<<endl;
return 0;
}
*/

/*
#include<iostream>
using namespace std;

void oddeven()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is even "<<endl;
    }
    else
    {
        cout<<n<<" is odd "<<endl;
    }

}
int main()
{
    oddeven();
}
*/
 /*
#include<iostream>
using namespace std;
void b7()
{
    cout<<"Hello b7"<<endl;
    //section();
}

void section()
{
    cout<<"This is a section of b7"<<endl;;
    b7();
}

void oddeven()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is even "<<endl;
    }
    else
    {
        cout<<n<<" is odd "<<endl;
    }

}
int main()
{
    b7();
    section();
    oddeven();
}
*/
/*
#include<iostream>
using namespace std;

void oddeven(int x)
{
    if(x%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}
void multiple(int a, float b)
{
    int c = a*b;
    cout<<c;
}
int main()
{
    int n,x;
    cout<<"Enter a num";
    cin>>n;
    oddeven(x);
    oddeven(25);
    multiple(10,0.5);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void swapNum(int x,int y,int z)
{
    int s=x;
    x=y;
    y=z;
    z=s;
    cout<<x<<endl<<y<<endl<<z;
}
int main()
{
    int a=2;
    int b=3;
    int c=4;
   swapNum(a,b,c);
   }
   */
/*
#include<iostream>
using namespace std;

void fun(int a,int b)
{
  cout<<(a+b);
}
int main()
{
    fun(2,3);
    return 0;
}
*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int randomNumber = rand();
    cout<<randomNumber;
}
*//*
 #include<iostream>
 using namespace std;

 void f1(int x)
 {
     int n=5;
     cout<<x+n<<endl;
 }
 int f2()
 {
     int n=10;
     cout<<n;
 }
 int main()
 {
     f1(10);
     f2();
 }
*//*
#include<iostream>
using namespace std;

void f(int u,int v)
{
    int temp;
    int t1=u,t2=v;

    while(v!=0)
    {
        temp=u%v;
        u=v;
        v=temp;
    }
    cout<<"GCD: "<<u<<endl;
    int lcm=(t1*t2)/u;
    cout<<"LCM :"<<lcm;
}
int main()
{
    f(150,35);
}
*/
/*
#include<iostream>
using namespace std;

struct student
{
    int id;
    string name;
    float cgpa;
};
int main()
{
    student address1;

    address1.id=314;
    address1.name="rafi";
    address1.cgpa=3.99;
    cout<<address1.id<<endl<<address1.name<<endl<<address1.cgpa;
}*/
#include<iostream>
using namespace std;

struct student
{
    int roll;
    string name;
    int age;
};
int main()
{
    student info[5];
    for(int i=0;i<4;i++)
    {
        cout<<"Student roll"<<endl;
        cin>>info[i].roll;
        cout<<"Name"<<endl;
        cin>>info[i].name;
        cout<<"Student age"<<endl;
        cin>>info[i].age;
    }
    cout<<endl;
    for(int i=0;i<4;i++)
    {

            cout<<info[i].roll<<endl;
            cout<<info[i].name<<endl;
            cout<<info[i].age<<endl;

    }
}
/*
#include<iostream>
using namespace std;

struct complex1
{
    int add,sub,multi;
};
complex1 add(int a,int b)
{
    int c=a+b;
    cout<<"C="<<c<<endl;
}
complex1 sub(int a,int b)
{
    int d=a-b;
    cout<<"D="<<d<<endl;
}
complex1 multi(int a,int b)
{
    int y=a*b;
    cout<<"Y="<<y<<endl;
}
int main()
{
    add(2,3);
    sub(3,2);
    multi(2,3);
}*/
/*
#include<iostream>
using namespace std;

class rectangle
{
    int length,breadth;
public:
    rectangle(int a,int b)
    {
         length=a;
         breadth=b;
    }
    void area()
    {
        cout<<length*breadth<<endl;
    }
    void perimeter()
    {
        cout<<2*(length+breadth)<<endl;
    }
};
class squar
{
public:
    squar(int x)
    {
      //int u=x;
      cout<<x*x;
    }
};
int main()
{
    rectangle r(12,4);
    r.area();
    r.perimeter();
    squar(5);
}
*/
