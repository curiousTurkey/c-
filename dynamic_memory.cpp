#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    //dynamic memory: Memory allocated after the program is already compiled and running. 
    //Using the 'new' keyword/operator to allocate memory in heap rather than the stack.
    //useful when we don't know how much memory we will need. Makes our program more flexible, especially when accepting user input.
    //make sure to use delete keyword to delete the pointer after usage
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;
    cout << "Address : " << pNum << endl << "Value : " << *pNum;
    delete pNum; //deallocating the memory space. 
    return 0;
}