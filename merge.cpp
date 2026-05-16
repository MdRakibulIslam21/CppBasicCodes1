#include<iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);

    string mergeString = str1+str2;
    cout<<mergeString;

return 0;
}
