#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        double p;
        cin>>p;
        sum=sum+p;
    }
    double result=sum/n;
    cout<<result<<endl;
    return 0;
}
