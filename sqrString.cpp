#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            string s1="";
            string s2="";
            for(int i=0;i<n/2;i++){
                s1=s1+s[i];
            }
            for(int i=n/2;i<n;i++){
                s2=s2+s[i];
            }
            if(s1==s2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

}
