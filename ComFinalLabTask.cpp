#include<iostream>
using namespace std;
int main(){
    string exp;
    string input;
    cout<<"Enter the expression: ";
    cin>>exp;
    cout<<"User String: ";
    cin>>input;
    bool valid = false;
    if(exp[1]=='U'){
        char first=exp[0];
    char second=exp[2];
    if(input.length()==1){
        if(input[0]==first || input[0]==second){
                valid=true;
        }
    }
    }
    else if(exp[1]=='*'){
            char ch =exp[0];
    for(int i=0;i<input.length();i++){
        if(input[i]!=ch){
            valid=true;
        }
    }

    }
    else if(exp[1]=='+'){
            char ch =exp[0];
    for(int i=0;i<input.length();i++){
        if(input[i]!=ch){
            valid=true;
        }
          cout<<"valid"<<endl;
    }

    else{
        cout<<"Invalid"<<endl;
    }




}
