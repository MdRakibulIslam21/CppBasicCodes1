#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int yr=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        yr++;

    }
    cout<<yr<<endl;
    return 0;
}
