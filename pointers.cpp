#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    //pointers : a variable that stores the address of another variable
    // & - address of operator
    // * - dereference operator

    string name = "Eldhose";
    string *pName = &name;
    int ages[4] = {20,22,21,32};
    int *pAges = ages;  
    int age = 21;
    int *pAge = &age;
    cout << pName << " = address" << endl << *pName << " = value" << endl; 
    cout << pAge << " = address" << endl << *pAge << " = value" << endl; 
    string freePizza[5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4", "Pizza 5"};
    string * pFreePizza = freePizza; // no need to add & when assigning array to pointer because the array is already a memory address.
    cout << "Pizzas : " << endl ;
    cout << *pFreePizza << endl;
    cout << "Second element: " << *(pFreePizza + 2) << endl; // points to next element
    cout << "address of second element" << &freePizza[1];
    cout << "Ages in array ; \n";
    for(int i = 0; i <= 3; i++){
        cout << *(pAges + i) << endl;
    }
    return 0;
}