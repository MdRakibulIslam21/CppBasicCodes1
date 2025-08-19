#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    int leftside=int(n);
    double rightside=n-leftside;
    if(rightside==0.0){
        cout<<"int "<<leftside<<endl;
    }
    else{
        cout<<"float "<<leftside<<" "<<rightside<<endl;
    }
    return 0;
}
