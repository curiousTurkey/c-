#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Animal{
    
    public: 
        bool isAlive;
        Animal(){
            isAlive = true;
        }
    void eat(){
        cout << "This animal is eating..." << endl;
    }
};
class Dog : public Animal{
    public: 
        void bark(){
            cout << "The dog goes woof" << endl; 
        }
};
class Cat : public Animal{
    public: 
        void meow(){
            cout << "The cat goes meow..." << endl;
        }
};
int main(){
    Dog dog;
    Cat cat;
    cout << dog.isAlive;
    dog.eat();
    dog.bark();
    cat.eat();
    return 0;
}