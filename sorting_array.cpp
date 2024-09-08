#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int arraySize, array[100], temp;
    cout << "Enter the array size: (Max 100 elements)";
    cin >> arraySize;
    cout << "Enter array elements";
    for(int i = 0; i < arraySize ; i++){
        cin >> array[i];
    }
    cout << "Sorted array = "; 
    for(int i = 0; i < arraySize - 1; i++){
        for(int j = i + 1; j < arraySize; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0; i < arraySize; i++){
        cout << array[i] << " ";
    }
    return 0;
}