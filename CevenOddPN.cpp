#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        int even=0;
        int odd=0;
        int positive=0;
        int negative=0;
        for(int i=0;i<n;i++){
                int N;
                cin>>N;
            if(N%2==0){
                even++;
            }
            else{
                odd++;
            }
            if(N>0){
                positive++;
            }
            else if(N<0){
                negative++;
            }
        }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}
