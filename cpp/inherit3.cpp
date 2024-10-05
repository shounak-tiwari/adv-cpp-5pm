#include<iostream>
using namespace std;
class cycle{
	int nos,now,max;
	string brand_name,model;
	public:
	void input(){
		cout<<"Enter brand name : ";
		cin>>brand_name;
		
		cout<<"Model number : ";
		cin>>model;
		cout<<"enter the number of wheels : ";
		cin>>now;
		
		cout<<"Enter the number of seats : ";
		cin>>nos;
		
		cout<<"Enter the maximum speed : ";
		cin>>max;
	}	
	void showdetails(){
		cout<<"Brand name : "<<brand_name <<endl;
		cout<<"model : "<<model<<endl;
		cout<<"The number of wheels : "<<now<<endl;
		cout<<"The number of seats : "<<nos<<endl;
		cout<<"The number of max : "<<max<<endl;
	}
};

class car : private cycle{
	int airbag,nocam;
	string cooling_type;
	int cylinders,power;
	public:
	void enter_Details(){
		input();
		
		cout<<"No of air bags : ";
		cin>>airbag;
		cout<<"No of camera : ";
		cin>>nocam;
		cout<<"Cooling type : liquid / air : ";
		cin>>cooling_type;
		cout<<"Engine Cylinders : ";
		cin>>cylinders;
		cout<<"Power : ";
		cin>>power;				
	}
	
	void show_car(){
		showdetails();
		cout<<"No of air bags : "<<airbag<<endl;
		cout<<"No of camera : "<<nocam<<endl;
		cout<<"Cooling type : "<<cooling_type<<endl;
		cout<<"Engine cyclinder : "<<cylinders<<endl;
		cout<<"Power : "<<power<<endl;
	}
};


int main(){
	//car obj;
	//obj.enter_Details();
	//obj.show_car();
	
	cycle object;
	object.input();
	object.showdetails();
	
}







