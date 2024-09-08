#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    srand(time(0)); // this is the seed for rand function
    int num1 = (rand() % 5) + 1; // gives random number between 1 to 20
    int num2 = (rand() % 5) + 1; // gives random number between 1 to 20
    int num3 = (rand() % 5) + 1; // gives random number between 1 to 20
    cout<< num1 << endl;
    cout<< num2 << endl;
    cout<< num3 << endl;

    switch(num1){
        case 1: cout << "You won a bumper sticker!";
        break;
        case 2: cout << "You won a headlight";
        break;
        case 3: cout << "You won a gift card";
        break;
        case 4: cout << "You won a plant";
        break;
        case 5: std::cout << "You won an xbox";
        break;
        
    }
    return 0;
}