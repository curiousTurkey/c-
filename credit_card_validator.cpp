#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int getDigit(const int number);
int sumOfOddDigits(const string number);
int sumOfEvenDigits(const string number);
int main(){
    string cardNumber;
    int sum = 0;
    cout << "\n***************CREDIT CARD VALIDATOR*********************\n";
    cout << "\nEnter the credit card number";
    std::getline(cin >> std::ws, cardNumber);
    cout << cardNumber << endl;
    sum = sumOfOddDigits(cardNumber) + sumOfEvenDigits(cardNumber);
    cout << "Sum = " << sum;
    if(sum % 10 == 0){
        cout << "\nValid credit card number";
    } else {
        cout << "\nInvalid credit card number";
    }
    return 0;
}

int getDigit(const int number){
    // int tempNumber = number;
    // int sum = 0;
    // if(tempNumber > 9){
    //     while(tempNumber != 0){
    //         sum += tempNumber % 10;
    //         tempNumber = tempNumber / 10;
    //     }
    // } else {
    //     sum = number;
    // }
    // return sum;
    //a better way to write the above monstrocity in single line
    return (number % 10) + (number / 10 % 10); //
}
int sumOfOddDigits(const string cardNumber){
    int sum = 0; 
    for (int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += getDigit(cardNumber[i] - '0');
    }
    return sum;
}
int sumOfEvenDigits(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2 ; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}