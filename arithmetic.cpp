#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    //paranthesis
    //multi / divi
    //add / sub
    //(+ , - , * , / , %)

    //type conversion
        //implicit - automatically
        //explict - precede value with new data type
    
    double x = (int) 3.14;
    cout<<x;
    char y = 101; // 'e' is output because 101 in ascii is letter 'e'
    cout<<y;
    int question = 10;
    int correct = 8;
    double percentage = (double)correct / question * 100;
    cout<<endl<<percentage << "%";
    return 0;
}