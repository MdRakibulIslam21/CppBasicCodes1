<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cntU = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'U'){
                cntU++;
            }
        }

        if(cntU % 2 == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cntU = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'U'){
                cntU++;
            }
        }

        if(cntU % 2 == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
>>>>>>> 652974fecab155fcc26a5b237e85b45e659c0845
