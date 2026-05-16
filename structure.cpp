/*#include<iostream>
using namespace std;

class Rectangle
{
    int length,width;
public:
    Rectangle(int l,int w)
    {
        length=l;
        width=w;
    }
    int area()
    {
        return length*width;
    }
    int perimeter()
    {
        return 2*(length+width);
    }

};
int main()
{
    Rectangle rect(5,3);
    cout<<"Area:"<<rect.area()<<endl;
    cout<<"Perimeter:"<<rect.perimeter()<<endl;

    return 0;

}
*/
//Course.h

#include<string>
#include<iostream>
using namespace std;
class Course
{
    private:
        string courseID;
        string courseName;
        int credits;
        Course * nextCourse;
    public:
        void EnterCourse() const;
        void SetNext(Course *);
        string GetCourseID() const;
        string GetCourseName() const;
        int GetCredits() const;
};

void Course::EnterCourse() const
{
    cout<<"=======Enter Course Information========\n";
       cout <<"Enter Course ID: \n";
    cin>>courseID;
    cout<<"Enter Course Name: \n";
    cin>>courseName;
    cout<<"Enter credits: \n";
    cin>>credits;
}



string Course::GetCourseID() const
{
    return courseID;
}

string Course::GetCourseName() const
{
    return courseName;
}

int Course::GetCredits() const
{
    return credits;
}

void Course::SetNext(Course * cou)
{
    nextCourse=cou;
}

