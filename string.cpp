#include<iostream>
using namespace std;
int main(){
string str;// = i like programming;
getline(cin,str);

int count = 0;
for(int i = 0;str[i]!='\0';i++){
    count++;
}
cout<<"Length of String is:"<<count<<endl;
return 0;

}
