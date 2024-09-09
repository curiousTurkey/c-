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
void carDetails(Car &car);
void paintCar(Car &car, string color);
int main(){
    Car car1, car2;
    car1.model = "LFA";
    car1.year = 2012;
    car1.color = "Blue";
    car2.model = "Camaro";
    car2.year = 2016;
    car2.color = "Yellow";
    cout << "Car 1: " << endl;
    carDetails(car1);
    cout << "Car 2: " << endl;
    carDetails(car2);
    paintCar(car2, "Black");
    return 0;
}
void carDetails(Car &car){
    cout << car.model << endl << car.year << endl << car.color << endl;
    cout << endl << endl;
}
void paintCar(Car &car, string color){
    car.color = color;
    cout << "Car painted to " << color << endl;
    carDetails(car);
}
//can pass the address of the struct if u want to work with the original struct
// void carDetails(Car &car){
//     cout << car.model << endl << car.year << endl << car.color << endl;
// }