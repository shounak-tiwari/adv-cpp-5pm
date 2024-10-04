#include<iostream>
using namespace std;

class Student{
	private:
	int roll;
	string name ;
	int age;
	public:
	Student(int r,string n,int a);	
	//copy constructor
	
	Student(Student &temp){
	cout<<"Hey ! copy will execute ";
		roll= temp.roll;
		name = temp.name;
		age = temp.age;
	}
	
	void display();
};

int main(){
	Student obj(1001,"Sanjeet singh",24);
	
	
	Student Sanjeet(obj);
	
	Sanjeet.display();
}







Student::Student(int r,string n,int a){
		roll= r;
		name = n;
		age = a;
}

void Student::display(){
	cout<<"\nThe name of student : "<<name;
	cout<<"\nThe age of student : "<<age;
	cout<<"\nThe roll number of student : "<<roll;	
}
