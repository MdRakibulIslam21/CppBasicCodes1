#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    string result ="0";
    for(int i =0;i<a.length();i++){
        if(a[i]!=b[i]){
            result=result+'1';
        }
        else{
            result=result+'0';
        }
    }
    cout<<result<<endl;
}
