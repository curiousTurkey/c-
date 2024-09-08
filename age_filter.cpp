#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    //if() else
    //if else if...
    // < , <= , > , >=
    
    int age;
    cout << "Enter your age";
    cin >> age;
    if(age < 0){
        cout << "Don't lie lil bro" << endl;
    } else if(age >= 18){
        cout << "Welcome to cornhub" << endl;
    } else {
        cout << "Denied entry. Touch grass lil bro!" << endl;
    }
    //switch

    switch(age){
        case 0 : cout << "Dont lie lil bro!";
        break;
        case 18 : cout << "Welcome to cornhub";
        break;
        default: cout << "You ain't getting in";
        break;
    }
    return 0;
}