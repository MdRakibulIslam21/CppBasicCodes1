/*#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    cout<<"Enter the integer num:"<<endl;
    cin>>a;
    cout<<"Enter the decimal num:"<<endl;
    cin>>b;
    cout<<"Enter the character num:"<<endl;
    cin>>c;

    cout<<"The integer number is:"<<a<<endl;
    cout<<"The decimal number is:"<<b<<endl;
    cout<<"The character number is:"<<c<<endl;

    return 0;

}
*/
/*#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the number:"<<endl;
    cin>>n1;
    cout<<"Enter the number:"<<endl;
    cin>>n2;
    cout<<"Enter the number:"<<endl;
    cin>>n3;

    float c = (n1+n2+n3)/3;
    cout<<"Addition:("<<n1<<"+"<<n2<<"+"<<n3<<")/3"<<"="<<c;

    return 0;
}

*/
/*#include<iostream>
using namespace std;

int main()
{
    int n,square,cube;

    cout<<"Enter any number:";
    cin>>n;

    square=n*n;
    cube=n*n*n;
    cout<<"The absolute value of number:"<<square<<endl<<cube<<endl;


    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main()
{
    int intType;
    signed int signedintType;
    char charType;
    float floatType;
    double doubleType;
    long double longdoubleType;

     cout<<"size of int:"<<sizeof(intType) <<"byte"<<endl;
     cout<<"size of signed integer:"<<sizeof(signedintType) <<"byte"<<endl;
     cout<<"size of char:"<<sizeof(charType) <<"byte"<<endl;
     cout<<"size of floatType:"<<sizeof(floatType) <<"byte"<<endl;
     cout<<"size of doubleType:"<<sizeof(doubleType) <<"byte"<<endl;
     cout<<"size of longdoubleType:"<<sizeof(longdoubleType) <<"byte"<<endl;
}
*/
/*#include<iostream>
using namespace std;

int main()
{
    char upper,lower;
    int ascii;

    cout<<"Enter the upper case:"<<endl;
    cin>>upper;

    ascii=upper+32;

    cout<<"Lower case is:"<<char(ascii)<<endl;

    cout<<"Enter the lower case:"<<endl;
    cin>>lower;

    ascii=lower-32;

    cout<<"Upper case is:"<<char(ascii);


    return 0;
}


*/
/*#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,temp;

    cout<<"Enter any number:"<<endl;
    cin>>num1>>num2>>num3;

    temp=num1;
    num1=num2;
    num2=num3;
    num3=temp;

    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
    cout<<"num3:"<<num3<<endl;



}

*/
/*
#include<iostream>
using namespace std;

int main()
{
    int hr,minu,sec;
    int hr1,minu1,sec1;
    int hr2,minu2,sec2;

    cout<<"Enter time1:"<<endl;
    cin>>hr1>>minu1>>sec1;

    cout<<"Enter time2:"<<endl;
    cin>>hr2>>minu2>>sec2;

    sec=sec1+sec2;
    minu=minu1+minu2+(sec/60);
    hr=hr1+hr2+(minu/60);

    sec=sec%60;
    minu=minu%60;

    cout<<"HH:MM:SS:"<<hr<<":"<<minu<<":"<<sec;
    return 0;
}

*/






























