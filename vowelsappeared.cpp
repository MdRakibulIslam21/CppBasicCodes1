#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count = 0;
    for(int i=0;i!='\0';i++/*: str*/){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            count ++;
        }
    }
    cout<<"Vowels Appeared:"<<count<<"times.";

}
