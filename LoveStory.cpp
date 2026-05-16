#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string current ="codeforces";
        int different=0;
        for(int i=0;i<10;i++){
            if(current[i]!=s[i]){
                different++;
            }
        }
        cout<<different<<endl;
    }

}
