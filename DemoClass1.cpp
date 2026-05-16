#include<iostream>
using namespace std;

class student
{
public:
    string name;
    string id;
    int age;

    void info(string a,int b,int c)
    {

        name=a;
        id=b;
        age=c;

    }
    void showStudentInfo()
    {
        cout<<name<<endl<<id<<endl<<age<<endl;
    }
};
int main()
{
    student s;
    s.info("Rakib",24***,22)
    s.showStudentInfo()<<endl;
    return 0;

}
