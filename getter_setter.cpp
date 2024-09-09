#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Pizza{
    private:
        int temp;
    public:
    Pizza(){
        temp = 0;
    }
    void setTemp(int temp){
        this->temp = temp;
    }
    void getTemp(){
        cout << "The temperature is " << temp << endl;
    }
};
int main(){
    //Abstraction: Hiding unnecessary data from outside the class.
    //getter : read value to private attributes
    //setter: set value to private attributes
    Pizza pizza;
    pizza.setTemp(450);
    pizza.getTemp();
    return 0;
}