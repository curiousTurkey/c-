#include <iostream>
using std::cin, std::cout, std::endl, std::string, std::getline;

int main(){
    string name;
    int age;
    cout<<"Enter your name";
    getline(std::cin>> std::ws, name); //the std::ws will ignore any white space in input buffer, usually uses when u have a cin statement before this statement
    cout<<"Enter your age";
    cin>> age;
    cout<< "Hello " <<name<<". You are " << age << " years old.";
    return 0;
}