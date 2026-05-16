#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Enter a last number :";
    cin >>n;

    for(int i=1;i<=n;i=i+1){
      sum=sum+pow(i,2);
    }
    cout<<sum;





    getch();
}
