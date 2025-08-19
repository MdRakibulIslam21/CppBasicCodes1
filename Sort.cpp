#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int original[3] ={a,b,c};
    int sorted[3]={a,b,c};
    sort(sorted,sorted+3);
    for(int i=0;i<3;i++){
        cout<<sorted[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<original[i]<<endl;
    }
    return 0;
}
