#include<iostream>
using namespace std;

int main(){
    int a[5]={3,4,5,6,2};
    int sum=0;
    int avg;
    int count;
    for(int i=0;i<5;i++){
        cout<<a[i];

        sum+=a[i];
        ++count;

    }
    cout<<"enter the sum:"<<sum;


}
