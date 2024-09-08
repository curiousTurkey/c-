#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
template<size_t N>
int arraySearch(std::array<int, N> array, int element);
int main(){
    std::array<int, 10> array = {1,3,8,6,88,92,0,66,23,11} ;
    int position = arraySearch(array, 12);
    (position >= 0) ? cout<<"\nElement found at position " << position : cout << "Element not found in array";
    return 0;
}
template<size_t N>
int arraySearch(std::array<int, N> array, int element){
    int i = 0;
    for(int item : array){
        ++i;
        if(element == item){
            return i; 
        }
    }
    return -1;
}