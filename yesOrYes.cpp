<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool possible = true;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='Y' && s[i+1]=='Y'){
                possible= false;
            }
        }
        if(possible){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool possible = true;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='Y' && s[i+1]=='Y'){
                possible= false;
            }
        }
        if(possible){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
}
>>>>>>> 652974fecab155fcc26a5b237e85b45e659c0845
