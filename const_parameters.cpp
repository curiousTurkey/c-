#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void printInfo(const string &name, const int &age);
int main(){
    string name = "Eldhose";
    int age = 23;
    printInfo(name, age);
    return 0;
}

void printInfo(const string &name, const int &age){
    cout << "Name : " << name << "\nAge: " << age ;
}  