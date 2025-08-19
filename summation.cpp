#include<iostream>
using namespace std;
int main(){
    long long int N,M;
    cin>>N >>M;
    long long int last_digits=(N%10)+(M%10);
    cout<<last_digits<<endl;
    return 0;
}
