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
    char *grades = NULL;
    int size;
    cout << "How many grades to input?" << endl;
    cin >> size;
    grades = new char[size];
    for(int i = 0; i < size; i++){
        cout << "Enter grade # " << i+1 << ": ";
        cin >> grades[i];
    }
    for(int i = 0; i < size; i++){
        cout << "Grade #" << i+1 << ": " << grades[i] << endl; 
    }
    pNum = new int;

    *pNum = 21;
    cout << "Address : " << pNum << endl << "Value : " << *pNum << endl;
    delete pNum; //deallocating the memory space. 
    delete[] grades; //delete an array, add [] after delete keyword
    return 0;
}