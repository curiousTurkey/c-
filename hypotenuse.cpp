#include <iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    double a, b;
    cout<<"Enter side A";
    cin >> a;
    cout << "Enter side B"; 
    cin >> b;
    cout<<"Hypotenuse = " << sqrt(pow(a, 2) + pow(b, 2));
    return 0;
}