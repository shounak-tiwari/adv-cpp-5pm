#include<iostream>
using namespace std;
class parent{
	public:
	
	void show(){
		cout<<"This is function of parent class";
	}
};

class child : protected parent {
	public:
		void show_child(){
			cout<<"This is child class";
		}
};
class child2:private child{
	
}

int main(){
	child object;
	object.show();
}






