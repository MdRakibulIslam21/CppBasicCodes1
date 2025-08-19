#include<iostream>
using namespace std;


int binarySearch(float data[],int size,int element){
	int index = -1;
	int first = 0;
	int last = size-1;
	cout<<"first index:"<<first<<endl;
	cout<<"last index:"<<last<<endl;


	while(first<=last){
		int mid = (first+last)/2;
		cout<<"mid index:"<<mid<<endl;

		cout<<"left side :"<<endl;
	for(int i=0;i<mid;i++){
        cout<<data[i]<<" ";
	}
	cout<<endl;
	cout<<"Mid value:"<<mid<<endl;
	cout<<"Right value:";
	for(int i=mid+1;i<last;i++){
        cout<<data[i]<<" ";
	}


		if(element== data[mid]){
				index = mid;
				break;
		}
		else if(element< data[mid]){
			last = mid-1;
		}
		else{
			first = mid+1;
		}
	}

	return index;
}


int main(){

	float data[10] = {12,15.5,16,18,20,24,25,30,56,88};
	cout<<"Data set:";

	int size = sizeof(data)/sizeof(data[0]);
	for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
	float myNum;

	cout<<"Searching for:"<<endl;
    cin>>myNum;

	int index = binarySearch(data,size,myNum);
	if(index>=0){
		cout<<"Found,Target:56== value :"<<myNum<<" at index= "<<index<<endl;
	}
	else{
		cout<<"Data Not Found"<<endl;
	}

return 0;
}






