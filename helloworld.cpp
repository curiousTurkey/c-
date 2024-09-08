#include <iostream>
//using namespaces
namespace first{
    int x = 1;
}
namespace second{
    int x = 10;
}
int main(){
    using std::cout; //if u use this, u can ommit the std:: part from cout statements
    using std::cin; //same as above, just for cin
    using std::string; //can ommit std:: for string
    //var types
    // int , double, char , std::string, bool
    int firstVariable, secondVariable ;
    firstVariable = 10 ;
    double userinput ;
    std::string name = "Eldhose";
    std::cout<<"Hello "<<name<<std::endl;
    int sum = firstVariable + secondVariable;
    std::cout<<"The value in sum = "<<sum<<std::endl;
    std::cout<<"Hello world!"<< std::endl <<"I like pizza";

    //const variables
    const double PI = 3.14159;
    bool isCompleted = false;

    //using namespace
    std::cout<<"This is from namespace second"<< second::x <<std::endl;
    std::cout<<"This is from namespace first" << first::x <<std::endl;
    return 0;
}