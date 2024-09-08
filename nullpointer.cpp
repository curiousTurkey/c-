#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    // Null value: a special value that means something has no value.
    // when a pointer is holding a null value, that pointer is not pointing to anything (null pointer)
    
    //nullptr = keyword that represents a null pointer  literal
    //nullptr are helpful when determining if an address was successfully assigned to a pointer
    int *pointer  = nullptr;
    int x = 123;
    pointer = &x;

    if(pointer == nullptr){
        cout << "Address assigns failed" << endl;
    } else {
        cout << "Pointer points to value : " << *pointer << endl;
    }
    return 0;
}