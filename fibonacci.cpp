/*#include<iostream>
using namespace std;

int main()
{
    int f1=0,f2=1,f3,n;
    cout<<"enter range:";
    cin>>n;;
    for(int i=1;i<=n;i++)
    {
      f3=f1+f2;
      cout<<f3<<" ";
      f1= f2;
      f2=f3;
    }


    return 0;
}


*/
#include<iostream>
using namespace std;

int main()
{
    int n,num,count=0;
    cout<<"Enter any number:";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Prime number:";
    }
    else{cout<<"Not Prime number:"; }

    return 0;
}
