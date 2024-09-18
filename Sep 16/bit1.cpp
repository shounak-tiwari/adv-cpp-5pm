#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of a";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	cout<<"The original value of a :  "<<a<<endl;
	cout<<"The original value of  b : "<<b<<endl;
	cout<<"'\nThe  a and b : "<<(a & b) <<endl;
	cout<<"'\nThe  a or b : "<<(a | b) <<endl;
	cout<<"'\nThe  a xor b : "<<(a ^ b) <<endl;
	return 0;
}