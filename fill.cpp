#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int counter = 0;
    const int SIZE = 100;
    //fill() = fills a range of elements with a specified value 
    //         fill(begin, end, value) : begin=beginning address of the data structure, end=ending address of the data structure, value=value to be filled.
    string foods[10] = {"pizza", "pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    string cars[SIZE];
    fill(cars, cars + (SIZE / 2), "Lexus LFA"); // this fills the cars array with lexus lfa from the 0 th index to 100 th index
    fill(cars + (SIZE / 2), cars + SIZE, "Mazda");
    for(string food : foods){
        cout << food << " \n"; 
    }
    for(string car: cars){
        ++counter;
        cout << car << " " << counter << endl;
    }
    return 0;
}