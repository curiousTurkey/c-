#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//human class
class Human{
    public: 
    //constructor - a special method that is automatically called when an object is instantiated
    //useful for assigning values to attributes as arguments
    Human(string name, int age, string job){
        this->age = age;
        this->name = name;
        this->job = job;
    }
    
    string name, job;
    int age;

    void eat(){
        cout << "This person is eating..." << endl;
    }
    void drink(){
        cout << "This person is drinking..."  << endl;
    }
    void sleep(){
        cout << "This person is sleeping... zzz..."  << endl;
    }
};
class Car{
    public: 
    string make, model, color;
    int year;
    void accelarate(){
        cout << "The car is accelarating... " << endl;
    }
    void brake(){
        cout << "The car is breaking... " << endl;
    }
};
int main(){
    //object : a collection of attributes and methods and can be used to mimic real world objects
    //class : a blueprint to create an object
    Human human1("Eldhose", 22, "Unemployed");
    Car car1;
    // human1.name = "Eldhose";
    // human1.job = "Unemployed";
    // human1.age = 22;

    human1.eat();
    human1.sleep();
    human1.drink();
    cout << human1.name << endl;
    car1.make = "Lexus";
    car1.model = "LF-A";
    car1.year = 2013;
    car1.accelarate();
    car1.brake();
    return 0;
}