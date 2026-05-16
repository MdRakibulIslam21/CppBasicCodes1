#include<iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);

    if(str1==str2)
    {
        cout<<"Same.";
    }
    else{
        cout<<"Not same.";
    }
    //cout<<str1<<str2;


}

