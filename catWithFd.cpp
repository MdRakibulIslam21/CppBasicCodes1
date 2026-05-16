#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        int pw=1;
        while(w%2==0){
            w=w/2;
            pw=pw*2;
        }
        int ph=1;
        while(h%2==0){
            h=h/2;
            ph=ph*2;
        }
        int maxpieces=pw*ph;
        if(maxpieces>=n){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
