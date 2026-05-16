#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }

};
class student : public Person
{
    //name,age alredy in this class
public:
    int id;
    void display2()
    {
        cout<<"ID:"<<id<<endl;
        display1();
    }

};

int main()
{
    student s1;
    s1.id=314;
    s1.name="Rakib";
    s1.age=20;
    s1.display2();

    return 0;
}
