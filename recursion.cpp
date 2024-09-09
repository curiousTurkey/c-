#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int factorial(int number);
int main(){
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