#include<iostream>
using namespace std;
int main(){
	int a,unit;
	cout<<"Enter the value of a";
	cin>>a;
	cout<<"Enter the shifting unit  : ";
	cin>>unit;
	cout<<"The result  : "<<(a>>unit);
	return 0;

}