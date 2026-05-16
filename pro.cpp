#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countY=0;
        int countN=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y'){
                countY++;
            }
            else{
                countN++;
            }
        }
        if(countY>countN){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
