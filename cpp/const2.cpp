#include<iostream>
using namespace std;


class student{
	
	public:
	student(int roll,string name, int age){
		cout<<"\nThe roll number of student : "<<roll;
		cout<<"\nThe name of student : "<<name;
		cout<<"\nThe age of student : "<<age;	
	}
};

int main(){
	student object1(1001,"manjeet singh",21);
	student object2(1002,"gurupreet singh",23);
	student object3(1003,"sukhjeet singh",22);
	student object4(1004,"sanjeet singh",24);
}
