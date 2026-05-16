#include<iostream>
using namespace std;

class calculator
{
    int a,b,result;
public:
    calculator(int x,int y);
    int sum();
    ~calculator();

};
calculator::sum()
{
        result=a+b;
        return result;
}
calculator::~calculator()
    {
        cout<<"Calculator is closed.";
    }
calculator::calculator(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    calculator s1(20,10);
    cout<<s1.sum();
}
