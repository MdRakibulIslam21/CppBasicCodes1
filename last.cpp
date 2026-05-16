/*#include<iostream>
using namespace std;
#define N 7

int main(){
    int age[N]; // [] is called array notation

    //how to access array??
    //array_name[index]
    // indexing stats from 0 and ends at size-1
    for(int i=0;i<N;i++){
        cin>>age[i];
    }

    cout<<"Printing the Element of Array"<<endl;
    for(int i=0;i<N;i++){
        cout<<age[i]<<endl;
    }

    cout<<"Array in reverse order"<<endl;
    for(int i=N-1;i>=0;i--){
        cout<<age[i]<<endl;
    }


    //summation
    float sum=0;
    for(int i=0;i<N;i++){
        sum = sum + age[i];
    }
    cout<<"Summation of Array Elements : "<<sum<<endl;


    //finding maximum
    int maxValue;
    maxValue = age[0];
    for(int i=0;i<5;i++){
        if(maxValue < age[i])
        {
            //updating with new maximum
            maxValue = age[i];
        }
    }
    cout<<"Maximum of Array : "<<maxValue<<endl;

    return 0;

}
*/
/*
#include <iostream>

using namespace std;

class MyFristClass
{
public:
    MyFristClass();
    ~MyFristClass();
    //void display;

};
MyFristClass :: MyFristClass()
    {
        cout<<"cnstr"<<endl;
    }
    MyFristClass :: ~MyFristClass()
    {
        cout<<"dstr"<<endl;
    }


int main()
{
    MyFristClass ob;

}
*/


#include <iostream>
using namespace std;

int stringLength(const char* str) {
    const char* ptr = str;
    while (*ptr) {
        ptr++;
    }
    return ptr - str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    const char* cString = input.c_str();

    int length = stringLength(cString);

    cout << "The length of the string is: " << length << endl;

    return 0;
}
