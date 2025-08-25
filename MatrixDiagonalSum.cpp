#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int pdSum=0,sdSum=0;
    for(int i=0;i<n;i++){
        pdSum=pdSum+a[i][i];
        sdSum=sdSum+a[i][n-1-i];
    }
    cout<<abs(pdSum-sdSum)<<endl;
}
