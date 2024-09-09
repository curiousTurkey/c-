#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Pizza{
    public: 
    string topping1, topping2;
    Pizza(){

    }
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Pepperoni", "Mushrooms");
    Pizza pizza3;

    
    return 0;
}