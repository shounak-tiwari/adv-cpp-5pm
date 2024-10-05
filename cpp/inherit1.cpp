//single inheritance 

#include<iostream>
using namespace std;

class base {
	public:
	void  show(){
		cout<<"This is parent class function ";
	}
};


class derived :private base{
	public:
	void display(){
		cout<<"this is child class";
	}
	
};

int main(){
	derived obj;
	
	obj.show();	
}
