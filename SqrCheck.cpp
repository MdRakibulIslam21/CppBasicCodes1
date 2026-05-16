#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
                long long a;
                cin>>a;
            sum=sum+a;

        }
        long long k=sqrtl(sum);
        if(k*k==sum || (k+1)*(k+1)==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
