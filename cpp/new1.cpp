#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"enter the size of array : ";
	cin>>size;
	int *array;
	array = new int(size);
	for(int i =0 ;i<size;i++){
		cout<<"Enter the value of array";
		cin>>array[i];
	}
	for(int i =0 ;i<size;i++){
		cout<<array[i]<<endl;
	}
	delete [] array;
}
