#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        int pieces=1;
        cin>>w>>h>>n;
        while(w%2==0){
            w=w/2;
            pieces=pieces*2;
        }
        while(h%2==0){
            h=h/2;
            pieces=pieces;
        }
        if(pieces>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
