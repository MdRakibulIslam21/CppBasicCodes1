#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string input = "int a + 2b - c";
    string token;

    stringstream ss(input);

    while(ss >> token)
    {
        if(token== "int"|| token =="float"|| token== "return")
        {
            cout<<token<<" ,Keyword"<<endl;
        }

        else if(token =="+"|| token== "-" ||token== "*"|| token== "/")
        {
            cout<<token<< " ,Operator"<<endl;
        }

        else if(token[0]>='0'&&token[0]<= '9')
        {
            cout<<token<<" ,Invalid Identifier"<<endl;
        }
        else
        {
            cout<< token<<" ,Valid Identifier"<<endl;
        }
    }
    return 0;
}
