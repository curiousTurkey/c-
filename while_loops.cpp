#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string name;
    int number;
    int i, j;
    // while(name.empty()){
    //     cout << "Enter your name : "; 
    //     std::getline(cin, name);
    // }
    // cout << name;
    // do{
    //     cout << "Enter a positive number.";
    //     cin >> number;
    // }while(number < 0);

    // for (int i = 0; i < 10 ; i++){
    //     cout << i << endl;
    // }

    for (i = 1; i <= 10; i++){
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (i = 10; i >= 1; i--){
        for(j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}