#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;
    do{
    cout << "\n******************************BANKING APPLICATION***************************\n";
    cout << "\nEnter your choice";
    cout << "\n--------------------\n";
    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cin >> choice;

    cin.clear(); // clears the input buffer and resets error flags
    fflush(stdin); // clear the input buffer
    switch (choice)
    {
    case 1: showBalance(balance);
        break;
    case 2: balance += deposit();
            showBalance(balance);
        break;
    case 3: balance -= withdraw(balance);
            showBalance(balance);
        break;
    case 4: cout << "\nThank you for visiting!";
        break;
    default: cout << "\nInvalid choice";
        break;
    }

    } while(choice != 4);
    return 0;
}
void showBalance(double balance){
    cout << "Your balance = $" << std::setprecision(2) << std::fixed << balance << endl; // set precision sets the dedcimal point precision and fixed ensure it does in fixed notation. doesnt affect balance at all, just displays the rounded value
}
double deposit(){
    double amount;
    cout << "Enter the amount to be deposited : " << endl;
    cin >> amount;
    return amount;
}
double withdraw(double balance){
    double amount; 
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if(amount > balance){
        cout << "Insufficent funds to withdraw!!!";
        return 0;
    }
    return amount; 
}