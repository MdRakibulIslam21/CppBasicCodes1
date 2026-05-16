#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[0]=='//'){
            cout<<"This is a single line comment"<<endl;
        }
        else if(s[0]=='/*'&& s[0]-1=='*/'){
            cout<<"This is multiple line  comment"<<endl;
        }
        else if(s[0]=='/*'){

        }
    }
}
