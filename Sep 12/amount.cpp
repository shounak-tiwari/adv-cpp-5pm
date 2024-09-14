#include<iostream>
int main(){
	int amount;
	cout<<"Enter the amount : ";
	cin>>amount;

	int n1000,n100,n500,n10,n5,n2,n1;

	n1000 = amount/1000;
	amount = amount%1000;

	n500 = amount/500;
	amount = amount % 500;


	n100 = amount/100;
	amount = amount % 100;


	n10 = amount/10;
	amount = amount % 10;


	n5 = amount/5;
	amount = amount % 5;


	n2 = amount/2;
	amount = amount % 2;

	n1 = amount;

}