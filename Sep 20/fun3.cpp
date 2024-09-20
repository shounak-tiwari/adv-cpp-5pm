#include<iostream>
#include<initializer_list>
using namespace std;

void PrintName(initializer_list<string>name){
    for (auto &&x : name)
    {
        cout<<x<<endl;        
    }
}

int main(){
    PrintName({"Akash","Tiwari","Universal","informatics"});
}