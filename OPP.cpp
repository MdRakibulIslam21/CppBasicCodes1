/*#include<iostream>
using namespace std;

class Car
{
public:
    string brand;
    int model;
    double year;
};
int main()
{
    Car name;
    name.brand="BMW";
    name.model=75;
    name.year=2010;

    cout<<name.brand<<" "<<name.model<<" "<<name.year;
}
*/
#include<iostream>
using namespace std;

void year(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"Not leap year"<<endl;
    }
}
int main()
{
   year(2022);
   year(2023);
   year(2024);
}
