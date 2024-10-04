#include<iostream>

using namespace std;

class result {
	float percentage;
	public:
	result(float p);	
	void display();
	
	result (result &temp){
		percentage = temp.percentage;
	}
};

int main(){
	result devesh(98.25);
	
	devesh.display();
	
	
	
	result ashu(devesh);
	
	
	ashu.display();
}

























void result :: display(){
	cout<<"The percentage of student : "<<percentage;
}


//defination of const 

result :: result(float p){
	percentage = p;
}
