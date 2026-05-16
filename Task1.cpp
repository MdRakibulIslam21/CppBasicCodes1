#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+' || s[i]=='='){
            count++;
            cout<<"operator1: "<<s[i]<<endl;
        }
    }
    cout<<"number of operators = "<<count<<endl;

}
