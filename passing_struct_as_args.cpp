#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Car{
    string model;
    int year;
    string color;
};
void carDetails(Car car);
int main(){
    Car car1, car2;
    car1.model = "LFA";
    car1.year = 2012;
    car1.color = "Blue";
    car2.model = "Camaro";
    car2.year = 2016;
    car2.color = "Yellow";
    cout << "Car 1: ";
    carDetails(car1);
    cout << "Car 2: ";
    carDetails(car2);
    return 0;
}
void carDetails(Car car){
    cout << car.model << endl << car.year << endl << car.color << endl;
}