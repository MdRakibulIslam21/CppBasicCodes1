#include<iostream>
using namespace std;

int main()
{
    string input;
    cout<<"Enter input: ";
    cin>>input;

    int count = 0;

    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='+' || input[i]=='=')
        {
            count++;
            cout<<"operator"<<count<<" : "<<input[i]<<endl;
        }
    }

    cout<<"number of operators = "<<count<<endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter input: ";
    cin>>s;

    if(s.size()>=2 && s[0]=='/' && s[1]=='/')
        cout<<"This is a single line comment.";

    else if(s.size()>=4 && s.substr(0,2)=="/*" && s.substr(s.size()-2,2)=="*/")
        cout<<"This is a multi line comment.";

    else
        cout<<"This is not a comment.";

    return 0;
}
