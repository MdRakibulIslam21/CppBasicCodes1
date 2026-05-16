#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
    int *ptr1=new int(10);
    cout << "size of ptr1 : " <<sizeof(ptr1)<< endl;
    cout << "size of *ptr1 : " <<sizeof(*ptr1)<< endl;

    char *ptr2=new char('a');
    cout <<"size of ptr2 : " <<sizeof(ptr2)<< endl;
    cout <<"size of *ptr2 : "<<sizeof(*ptr2)<< endl;

    double *ptr3=new double(12.78);
    cout <<"size of ptr3 : " <<sizeof(ptr3)<< endl;
    cout <<"size of *ptr3 : "<<sizeof(*ptr3)<< endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;

    return 0;
}

/*
int main(){
    int n = 5;
    for(int i = 1;i<=n;i++)
    {
        for(int j= 1;j<=n;j++){

            cout<<" ";
        }
        for(int k = 1;k<= n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"programming pioneers";
    return 0;

}
/*
void func() {
   static int i=0; //static variable
   int j=0; //local variable
   i++;
   j++;
   cout<<"i=" << i<<" and j=" <<j<<endl;
}
int main()
{
 func();
 func();
 func();
}
*/
