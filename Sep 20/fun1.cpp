#include<iostream>
using namespace std;
//return type function name 
int sum(int x,int y){
	return x+y;
}

int main(){
	int result = sum(10,20);
	
	cout<<"result : "<<result;	
	
	return 0;
}
