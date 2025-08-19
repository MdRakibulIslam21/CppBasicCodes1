#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int rating;
        cin>>rating;
        if(1900<=rating){
            cout<<"Division 1"<<endl;
        }
        else if(1600<=rating){
            cout<<"Division 2"<<endl;
        }
        else if(1400<=rating){
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}
