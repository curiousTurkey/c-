#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    double temp;
    char unit;

    cout << "\n****************************Temperature Conversion*************************\n";
    cout << "F - Fahrenheit\n";
    cout << "C - Celsius\n";
    cout << "What unit you would like to convert to ? \n";
    cin >> unit;
    if( unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in celsius\n";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature in celsius : " << temp << unit << endl;   
    } else if (unit == 'C' || unit == 'c'){
        cout << "Enter temperature in fahrenheit\n";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature in celsius : " << temp << unit << endl;
    } else {
        cout<< "Enter valid unit!";
    }
    return 0;
}