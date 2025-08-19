#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int rem=a%b;
        if(rem==0){
            cout<<"0"<<endl;
        }
        else{
                int result=b-rem;
            cout<<result<<endl;
        }
    }
    return 0;

}
