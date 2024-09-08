#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void happyBirthday(string name, int age);
double square(double side);
string fullName(string firstName, string lastName);
void bakePizza();
void bakePizza(string topping1, string topping2);

//global variable
int global = 10; // if u have same name variables as global and local, the function will use the local one, if u want to use global, use :: before the variable. ::global
int main(){
    happyBirthday("Eldhose", 22);
    double result = square(21.3);
    cout << "\nSquare  = " << result;
    cout << "\nFull name : " << fullName("eldhose", "babu");
    bakePizza();
    bakePizza("black olives", "pepperoni");
}
void happyBirthday(string name, int age){
    cout << "Happy Birthday to you! \nHappy birthday to you!\nHappy Birthday dear " << name << endl;
    cout << "Wow! you are " << age << " years old";
}
double square(double side){
    return side * side ;
}
string fullName(string firstName, string lastName){
    return firstName + " " + lastName;
}
//function overloading
void bakePizza(){
    cout << "\nHere is your pizza lil bro!";
}
void bakePizza(string topping1, string topping2){
    cout << "\nHere is your pizza with " << topping1 << " and " << topping2 << ".";
}