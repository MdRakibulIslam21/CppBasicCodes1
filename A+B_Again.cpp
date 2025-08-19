#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum;
    while(t--){
        int n;
        cin>>n;
        int leftNum =n/10;
        int rightNum =n%10;
        sum=leftNum+rightNum;
        cout<<sum<<endl;
    }
}
