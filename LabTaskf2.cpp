#include<iostream>
using namespace std;
/*
int main(){
    string type,name;
    char symbol;
    cout<<"Enter dataType: ";
    cin>>type;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter symbol: ";
    cin>>symbol;
    if(symbol==';'){
        cout<<"This is a varible."<<endl;
    }
    else if(symbol=='('){
                cout<<"This is a function."<<endl;
            }

    else{
        cout<<"Invalid."<<endl;
    }
}
}
int sum(int p,int q){
    int sum=p+q;
    return sum;
}
int main(){
    int x=5;
    int y=4;
    int result=sum(x,y);
    cout<<result<<endl;
}
*/
#include <iostream>
using namespace std;
bool isValidName(string name){
    if(!((name[0]>='a'&& name[0]<='z')||(name[0]>='A'&&name[0]<='Z')||name[0]== '_'))
        return false;
    /*or
   // for(int i =1;i<name.length();i++){
      //  if(!((name[i] >='a'&& name[i]<='z')||(name[i]>='A'&&name[i]<='Z')||(name[i]>='0'&&name[i]<='9')||name[i]=='_'))
           // return false;
    }*/
    return true;
}

int main(){
    string type,name;
    char symbol;
    cin>>type>>name>>symbol;
    if(type!="int" && type!="float"&&type!="char"&&type!="void")
        cout<<"Invalid Type";
    else if(!isValidName(name))
        cout<<"Invalid Name";
    else if(symbol==';')
        cout<<"Valid Variable";
    else if(symbol=='('){
        char close;
        cin >> close;

        if(close==')')
            cout<<"Valid Function";
        else
            cout<<"Invalid Function";
    }
    else
        cout<<"Invalid Declaration";
    return 0;
}

