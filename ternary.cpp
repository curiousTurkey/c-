#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int grade = 75;

    (grade >= 75) ? cout << "You pass \n" : cout << "You fail \n";
    bool hungry = true;
    hungry ? cout << "I am hungry \n" : cout << "I am not hungry \n" ; 
    cout << (hungry ? "I am hungry" : "I am not hungry");
    // and , or , not operator in c++ 
    // && , || , !
    return 0;
}