#include<iostream>
using namespace std;
void printArrary(int arr[],int size){
    for( int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int size){
    for(int select=0;select<size;select++){
        int minindex=select;
    }
    for(int i=select+1;i<size;i++){
        if(arr[minindex]>arr[i]){
            minindex=i;
        }
    }
    int temp=arr[select];
    arr[select]=arr[minindex]
    arr[minindex]=temp;


}
int main(){



    return 0;
}
