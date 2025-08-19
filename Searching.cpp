#include<iostream>
using namespace std;
int searchArray(int array[],int size,int element){
    for(int i= 0;i<size;i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;

}
 int main(){
     int numbers[]={1,2,3,4,5,6,7,8,9,10};
     int size = sizeof(numbers)/sizeof(numbers[0]);
     int myNum;

     cout<<"Enter element to search for:"<<endl;
     cin>>myNum;

     int index = searchArray(numbers,size,myNum);
     if(index>=0){
        cout<<myNum<<" is at index "<<index;
     }
     else{
        cout<<myNum<<" is not in the array ";
     }
     return 0;

 }

