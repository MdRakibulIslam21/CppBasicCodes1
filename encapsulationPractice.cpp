#include<iostream>
using namespace std;
class student
{
public:
    string name;
    string id;
    int age;
private:
    float cgpa;
public:
    student()
    {
        cout<<"student Empty constructor"<<endl;
    }
    student(string n,string i,int a,float c)
    {
        cout<<"student parameterized constructor"<<endl;
        name=n;
        id=i;
        age=a;
        cgpa=c;
    }
    void setCgpa(float c)
    {
        if(c>=0 && c<=4)
        {
            cgpa=c;
        }
        else
        {
            cout<<"Invalid CGPA"<<endl;
        }

    }
    float getcgpa()
        {
            return cgpa;
        }
    void showStudentInfo()
        {
            cout<<name<<endl;
            cout<<id<<endl;
            cout<<age<<endl;
            cout<<cgpa<<endl;
        }
};
int main()
{
    student s1("Rakib","24-*****-1",20,3.75);
    s1.showStudentInfo();
    student s2;
}

