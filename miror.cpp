#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string b="";
        for(int i=a.length()-1;i>=0;i--){
            if(a[i]=='p'){
                b+='q';
            }
            else if(a[i]=='q'){
                b+='p';
            }
            else{
                b+='w';
            }
        }
        cout<<b<<endl;
    }
}
