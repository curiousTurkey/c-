#include <iostream>
#include <array>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Shape{
    public: 
        double area;
        double volume;
};

class Cube : public Shape{
    public: 
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape{
    public: 
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.1416 * radius * radius;
        this->volume = (4/3.0) * 3.1416 * pow(radius, 3);
    }
};

int main(){
    Cube cube(5);
    Sphere sphere(5);

    cout << cube.area << endl;
    cout << cube.volume << endl;

    cout << sphere.area << endl;
    cout << sphere.volume << endl;
    return 0;
}