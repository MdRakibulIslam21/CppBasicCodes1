#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum=sum+a;
    }
    cout<<abs(sum)<<endl;
}
