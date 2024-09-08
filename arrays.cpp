#include <iostream>
#include <cmath>
#include <string>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
template <size_t N>
void totalPrice(std::array<double, N> prices);
void carsList(string cars[], int size);
int main(){
    string cars[] = {"Corvette", "Mustang", "Camry"};
    cout << cars[0] << endl; 
    std::array<double, 3> prices = {5.00, 9.99, 15.99}; 
    cout << prices[0] << endl;
    string name = "Eldhose";
    //sizeof()
    double gpa = 4.2;
    char grade = 'P';
    cout << sizeof(gpa) << endl;
    cout << sizeof(name) << endl;
    cout << sizeof(grade) << endl;
    cout << sizeof(prices) << endl;
    //can find array length by dividing total bytes / size of data type of single element
    cout << "Using loop : " << endl; 
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++){
        cout << prices[i] << endl;
    }
    //for each - less flexible
    cout << "Using for eachn\n"; 
    for(double price : prices){
        cout << price << endl;
    }
    //passing array to a function
    totalPrice(prices);
    carsList(cars, (sizeof(cars) / sizeof(cars[0])));
    return 0;
}
template<size_t N> //
void totalPrice(std::array<double, N> prices){
    cout << "\nTotal price : ";
    double total = 0;
    for(double price : prices){
        total += price;
    }
    cout << total << endl;
}
void carsList(string cars[], int size){
    cout << "Cars are : ";
    for(int i = 0; i < size ; i++){
        cout << cars[i] << endl;
    }
}