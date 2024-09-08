#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void swap(string &x, string &y);
int main(){
    //memory address = location of a variable in memory
    // can be accessed by address-of operator & 
    string x = "kool-aid";
    string y = "water";
    cout << "X : " << x << " Y: " << y << endl;
    swap(x,y);
    cout << "X : " << x << " Y: " << y << endl;
    return 0;
}
//gets the address of the passed variable and any changes made is done in the original variable
void swap(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}