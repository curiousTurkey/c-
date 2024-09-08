#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int _2dArray[3][3];
    cout << "Enter elements for a 3x3 matrix";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> _2dArray[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << _2dArray[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){    
            cout << _2dArray[i][i] << "\t";   
    }
    return 0;
}