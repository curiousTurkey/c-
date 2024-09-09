#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int factorial(int number);
int main(){
    //recursion: programming technique where a function invokes itself from within
    //breaks a complex concept into a repeatable single step
    // advantages - less code and cleaner
    // disadvantages - uses more memory, slower
    int number;
    cout << "Enter the number to find the factorial";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
int factorial(int number){
    if(number > 1){
        return number * factorial(number - 1);
    } else {
        return 1;
    }
}