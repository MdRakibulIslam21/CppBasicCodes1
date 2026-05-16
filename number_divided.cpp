#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a >>b ;
    double result = double(a)/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(result)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(result)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(result)<<endl;

}
