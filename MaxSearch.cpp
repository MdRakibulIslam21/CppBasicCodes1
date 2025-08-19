#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxNum = 0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x>maxNum){
            maxNum=x;
        }
    }
    cout<<maxNum<<endl;
}
