#include<iostream>
using namespace std;

int main()
{
    int fly[2][2];
int i = 0;
int n=0;
for(i=0; i<2; i++){
    for (n=0; n<2; n++){
        fly[i][n] =0;
    }
}
for(i=0; i<2; i++){
    for (n =0; n<2; n++){
        cout << fly[i][n]<< endl;
    }
}

}
