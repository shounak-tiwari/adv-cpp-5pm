#include<iostream>
#include<initializer_list>
using namespace std;

void printNames(initializer_list<string> nameList) {
    for (auto &name : nameList) {
        cout << name << " ";
    }
    cout << '\n';
}

int main() {
    printNames({"Unoversal", "Topics"});
    printNames({"Technopedia", "for", "your", "mastermind!"});
    return 0;
}