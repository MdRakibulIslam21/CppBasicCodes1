#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=b*log(a);
    double y=d*log(c);
    if(x>y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
