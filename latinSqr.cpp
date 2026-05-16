#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;;
        string all =a+b+c;
        int countA=0;
        int countB=0;
        int countC=0;
        for(int i=0;i<9;i++){
            if(all[i]=='A'){
                countA++;
            }
            if(all[i]=='B'){
                countB++;
        }
        if(all[i]=='C'){
                countC++;
        }
        }
        if(countA==2){
            cout<<"A"<<endl;
        }
        else if(countB==2){
            cout<<"B"<<endl;
        }
        else{
            cout<<"C"<<endl;
        }
}
}
