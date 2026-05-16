/*#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    public:
    int id;
    int roll;
    float cgpa;
    void display()
    {
        cout<<id<<endl<<roll<<endl<<cgpa<<endl;
    }
    void setvalue(int x,int y,float z )
    {
        id=x;
        roll=y;
        cgpa=z;
    }
};
int main()
{
    student rafi,safi;
    rafi.setvalue(120,312,3.35);
     rafi.display();
     safi.setvalue(111,314,3.99);
      safi.display();


}
*/
#include<iostream>
using namespace std;

class student
{
public :
    int id;
    float cgpa;
    display()
    {
        cout<<"id is:"<<id<<endl<<"CGPA is:"<<cgpa<<endl;
    }
    student(int x,float y)// Constructor with parameters
    {
        id=x;
        cgpa=y;
    }
    student()
    {
        cout<<"Default constractor"<<endl;
    }
};
int main()
{

    student ob;
    cout<<"Result of rafi"<<endl;
    student rafi(314,3.99);
    rafi.display();
    cout<<"Result of safi"<<endl;
    student safi(310,3.35);
    safi.display();
}


