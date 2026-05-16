/*#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world"<<endl;
    cout<<"B7";
    return 0;

}*/





/*#include<iostream>
using namespace std;

int main()
{
    int a,b = 20;
    int c;
    a=3;
    c=a;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    return 0;
}*/




/*#include<iostream>

using namespace std;

int main()
{
    int x=23,y=3,z=10; // or sum=x+y+z; ekhane add kora jabe.

    cout<<"Sum:"<<x+y+z<<endl;

    return 0;
}*/





/*#include<iostream>

using namespace std;

int main()
{
    int num1,num2,temp;

    cout<<"Enter two values:"<<endl;
    cin>>num1>>num2;

    temp = num1;
    num1=num2;
    num2 = temp;

    cout<<"num1:"<<num1<<endl<<"num2:"<<num2<<endl;

    return 0;



}*/  //3rd cls



/*
#include<iostream>

using namespace std;

int main()
{
    char a='B';
    cout<<a<<endl;

    return 0;

}
*/



/*
#include<iostream>

using namespace std;

int main()
{

    float a=3;// float use korechi bolei output a point asbe
    int b=5;
    cout<<b/a<<endl;

    return 0;

}

*/
/*
#include<iostream>

using namespace std;

int main()
{

    int a=5,b=7;
    float c;
    c=(float)a/b;
    cout<<c<<endl;

    return 0;

}
*/


/*#include<iostream>

using namespace std;

int main()
{
    int a=10,b=20;
    float c=4.5;
    b=c;
    cout<<b<<endl;

    c=b*0.5;
    cout<<c<<endl;

    c=a/(float)b;
    cout<<c;
}
*/




/*#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a num:"<<endl;
    cin>>num;

    if(num<0)
    {
        num=-num;
    }
    cout<<num<<endl;
    return 0;

}
*/

/*

#include<iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter an number:";
    cin>>number;
    if(number%2==0){
      cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
    return 0;
}


 */
    /* Program to determine if a number is even or odd
and also the number cannot be negative */


/*#include<iostream>
using namespace std;

int main ()
{
int number, remainder;
cout<<"Enter your number to be tested: "<<endl;
cin>>number;

remainder = number % 2;

if (number>= 0 && remainder == 0 ){
    cout<<"The number is even"<<endl;
}

else{
    cout<<"The number is odd"<<endl;
}

return 0;

}
*/

/*#include<iostream>
using namespace std;

int main()
{
 char ch;
 cout<<"Enter any latter:";
 cin>>ch;

 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 {
     cout<<"Vowell";
 }
 else{
    cout<<"consonant";

 }

 return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter any year:";
    cin>>year;
    if((year%4==0 && year%100!=0)||year%400==0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"Not leap year";

    }
    return 0;

}
*/


/*#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,larg;
    cout<<"Enter 3 number:";
    cin>>num1>>num2>>num3;
    if(num1>num2&&num1>num3)
    {
        larg=num1;
    }
    else if(num2>num1&&num2>num3)
    {
        larg= num2;
    }
    else
    {
        larg=num3;
    }
    cout<<"Larg number:"<<larg;
}
*/




/*
#include<iostream>
using namespace std;

int main()
{
    float cgpa;
    cout<<"Enter the CGPA:";
    cin>>cgpa;
    if(cgpa>=0 && cgpa<=4)
    {
        if(cgpa>=3.75)
        {
            cout<<"Congrats you got a scholarship";
        }
        else
        {
            cout<<"No scholarship";

        }
    }
    else
    {
        cout<<"Invalid CGPA"<<endl;
    }
    return 0;
}
*/

/*

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Press any park num:";
    cin>>ch;
    switch (ch)
    {
    case 'X':
        {
            cout<<"Car park";
            break;
        }
    case 'Y':
        {
            cout<<"bike park";
            break;

        }
    case 'Z':
        {
            cout<<"lorry park";
            break;

        }
    default:
        {
            cout<<"invalid ";

        }
    }




    return 0;


    }
*/

/*
#include<iostream>
using namespace std;

int main()
{
    float tp,p=500;
    int nt;
    cout<<"Enter a ticket no:";
    cin>>nt;

    switch(nt)
    {
    case 1:
        tp=p*1;
        cout<<"Its 1 ticket:"<<tp<<endl;
        break;

    case 2:
        tp=p*2;
        cout<<"Its 2 ticket:"<<tp<<endl;
        break;

    case 3:
        tp=p*3;
        cout<<"Its 3 ticket:"<<tp<<endl;
        break;

        default:

        cout<<"nope";


    }
    return 0;
}

*/





/*
#include<iostream>
using namespace std;

int main()
{
    for (int i=0; i<10;i=i+1)
        cout<<i<<"  hello B7"<<endl;




    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    for (char i=65; i<90;i=i+1)
        cout<<i<<endl;




    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    float a=4.987;
    int b=a;// 4 ar porer value show korbe na

    cout<<"type casting"<<b;
}

*/

/*

#include<iostream>
using namespace std;

int main()
{
    int precedence=(4+8)*2/3;
    cout<<"Ans is:"<<precedence<<endl;
}

*/

/*

#include<iostream>
using namespace std;

int main()
{
    int a=7;

    int b=--a;//pre dicriment

    cout<<"The result:"<<a<<endl;
    cout<<"The result:"<<b<<endl;
}
*/

/*

#include<iostream>
using namespace std;

int main()
{
    int a=7;

    int b=a--;//post dicriment

    cout<<"The result:"<<a<<endl;
    cout<<"The result:"<<b<<endl;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{

    int a,b,x,y,z,w;

    cout<<"Enter any num:"<<a<<b<<endl;
    cin>>a>>b;
    x=a--;//post dicriment
    y=--a;//pre dicriment
    z=a++;//post iicriment
    w=--a;//pre dicriment



    cout<<"The result:"<<x<<endl;
    cout<<"The result:"<<y<<endl;
    cout<<"The result:"<<z<<endl;
    cout<<"The result:"<<w<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;

int main()
{
    int num,rem;
    cout<<"Enter the num:";
    cin>>rem;
    rem=num%2;

    if(rem==0)
    {
        cout <<"the num even"<<endl;
    }
    else{

            cout<<"the num is odd";
            }
}


*/
/*
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two num a and b: ";
    cin>>a>>b;
    if  (a>b)
    {
        cout<<"a is the bigger num"<<endl;
    }
    else
        cout<<"b is the bigger num"<<endl;

    return 0;
}

*/

/*

#include<iostream>
using namespace std;

int main()
{
    float grade=0;
    cout<<"Enter grade of 5 student"<<endl;

    for(int i=1;i<=5;i++)
    {
        float cgpa;
        cout<<"Enter cgpa student"<<i;
        cin>>cgpa;

        grade=grade +cgpa;

    }
    float avg=(grade/5);
    cout<<"The average grade of 5 students:"<<avg;
    return 0;
}



*/

/*
#include<iostream>
using namespace std;

int main()
{
    float temperture,humidity,total_temp=0,total_humi,day=0,avg_temp,avg_humi;
    cout<<"Enter temperature and humidity of 5 days"<<endl;

    for(int i=1;i<=5;i++)
    {
        cout<<"Enter the temperture of day  "<<i<<endl;
        cin>>temperture;

        cout<<"Enter the humidity of day  "<<i<<endl;
        cin>>humidity;

        total_temp =total_temp + temperture;

        total_humi =total_humi + humidity;

        day =day+1;

    }
    avg_temp = total_temp/day;
    cout<<"Average temperature:"<<avg_temp<<endl;

    avg_humi = total_humi/day;
    cout<<"Average humidity:"<<avg_humi<<endl;

    return 0;

}


*/



/*
#include<iostream>
using namespace std;

int main()
{
    int a=40;
    cout<<++a<<endl;
    cout<<a++<<endl;
    cout<<--a<<endl;
    cout<<a--<<endl;
    cout<<(++a)--<<endl;
    cout<<(--a)++<<endl;
    cout<<++(++a)<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
}
*/


/*
#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while(i<20)
    {
        cout<<i<<endl;
        i+=2;
    }
    cout<<"End of while loop";
    return 0;
}



*/


/*
#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=2;i++)
    {
        cout<<"Rice list:"<<i<<endl;

        for(int i=1;i<=5;i++)
            cout<<i<<endl;
    }
    return 0;
}



*/



/*Program to calculate the 200th triangular number
Introduction of the for statement*/
/*
#include<iostream>
using namespace std;
int main ()
{
int n, triNum;
triNum = 0;

for ( n = 1; n <= 200; n = n + 1 )
	 triNum = triNum + n;

cout<<"The 200th triangular number = " << triNum;
return 0;
}


*/

//Program to reverse the digits of a number//
/*
#include<iostream>
using namespace std;

int main()
{
    int num,right_digit;
    cout<<"Enter any num:";
    cin>>num;

    while(num!=0)
    {
        right_digit=num%10;
        cout<<right_digit;
        num=num/10;
    }
    return 0;
}

*/

/*
#include<iostream>
using namespace std;

int main()
{

    for(int i=0;i<5;i++)
    {
        cout<<"Marks for student "<<i+1<<"=";
        cin>>marks[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<marks[i];
    }
    return 0;
}



*/


/*
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter num of student :";
    cin>>n;

    int student[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Marks for student"<<i+1<<endl;
        cin>>student[i];
        sum = sum+student[i];
    }

    cout<<"Total marks:"<<sum<<endl;
    float avg= (float)sum/n;
    cout<<"Average:"<<avg<<endl;

    int max = student[0];
    int min = student[0];

    for(int i=1;i<n;i++)
    {
       if(max < student[i])
       {
           max = student[i];
       }
       if(min > student[i])
       {
           min = student[i];
       }
    }
    cout<<"Maximum marks="<<max<<endl;
    cout<<"Minimum marks="<<min<<endl;

    return 0;


}
*/
/*
#include<iostream>
using namespace std;

void message(int a,int b=34)
{
    cout<<a<<endl;
    cout<<b<<endl;
}
int main()
{
    message(35);
}
*/
/*
#include<iostream>
using namespace std;

void square(int n)
{
    int result=n*n;
    cout<<result<<endl;
}
int main()
{
    square(4);
    square(5);
    square(6);
    square(8);
}
*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int randomNumber = rand()%5 +1;
    cout<<randomNumber<<endl;
    }
}
*/
/*)
#include<iostream>
using namespace std;

int main()
{
    int a[2][3]={{10,20,30},{30,40,50}};

    cout<<a[0][3];
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int a[2][3];
    cout<<"Enter the value of array :"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int k=0;k<3;k++)
        {
            cout<<"Enter the element position :"<<endl;
            cin>>a[i][k];
        }
        cout<<endl;
    }
    cout<<"The value of 2D array :"<<endl;
   for(int i=0;i<2;i++)
    {
        for(int k=0;k<3;k++)
        {
            cout<<a[i][k];
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int a[3][3],j,i;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter A["<<i<<"]["<<j<<"]"<<"  :";
        cin>>a[i][j];
        }
       cout<<endl;
    }
}
*/
/*

#include<iostream>
using namespace std;

int main()
{
    int a[3][3]={{3,4,3},{1,4,5},{7,2,5}};
    int b[3][3]={{8,3,4},{8,8,6},{9,3,1}};
    cout<<"Matrix A "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }


    cout<<"Matrix B "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Addition of matrix A & B :"<<endl;
int     c[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }


}

*/

#include<iostream>
using namespace std;

int main()
{
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int i,j,r1,r2,c1,c2,sum=0;
    cout<<"Enter a num of rows for first matrix:"<<endl;
    cin>>r1;
    cout<<"Enter a num of cols for first matrix :"<<endl;
    cin>>c1;

    cout<<"Enter a num of rows for second matrix:"<<endl;
    cin>>r2;
    cout<<"Enter a num of cols for second matrix :"<<endl;
    cin>>c2;

    while(c1!=r2)
    {
        cout<<"Erro!! colum of 1st matrix not equal to 2nd matrix row"<<endl;cout<<"Enter a num of rows for first matrix:"<<endl;
    cin>>r1;
    cout<<"Enter a num of cols for first matrix :"<<endl;
    cin>>c1;

    cout<<"Enter a num of rows for second matrix:"<<endl;
    cin>>r2;
    cout<<"Enter a num of cols for second matrix :"<<endl;
    cin>>c2;


    }

    cout<<"Enter a element of A matrix :"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]";
            cin>>A[i][j];
        }
    }
    cout<<"A ="<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;

    }cout<<"Enter a element of B matrix :"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]";
            cin>>B[i][j];
        }
    }
    cout<<"B ="<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                sum=sum+A[i][k] * B[k][j];
                int multiplied[i][j] = sum;
                sum=0;



            }
            //
        }
    }
    cout<<endl;
    cout<<multiplied;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            cout<<multiplied[i][j];
        cout<<endl;
    }



}
