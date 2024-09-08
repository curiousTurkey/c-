#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;
namespace cal_t{
    int op;
}
int main(){
    double number1, number2;
    while(1){
    cout << "\n*********************CALCULATOR********************\n";
    cout << "Enter operator choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit";
    cin >> cal_t::op;
    if(cal_t::op == 6){
        exit(0);
    }
    cout << "Enter number 1";
    cin >> number1;
    cout << "Enter number 2";
    cin >> number2;
    switch (cal_t::op)
    {
    case 1: cout << "Sum of " << number1 << " and " << number2 << " = " << (number1 + number2);
    break;
    case 2: cout << "Difference of " << number1 << " and " << number2 << " = " << (number1 - number2);
    break;
    case 3: cout << "Product of " << number1 << " and " << number2 << " = " << (number1 * number2);
    break;
    case 4: cout << "Division of " << number1 << " and " << number2 << " = " << (number1 / number2);
    break;
    case 5: cout << "Remainder while dividing " << number1 << " and " << number2 << " = " << ((int)number1 % (int)number2);
    break;
    default: cout << "Wrong choice!";
    break;
    }
    cout << "\n***************************************************\n";
    }
    return 0;
}