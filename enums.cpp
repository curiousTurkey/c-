#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
enum Day {
    sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6
};
int main(){
    //enums - a user-defined data type that consists of paired named-integer constants. Great if you have a set of potential options
    //enum values are automatically assigned values from 0 to n if we dont specify an integer value
    Day today = sunday;

    switch (today)
    {
    case 0:
        cout << "It's sunday" << endl;
        break;
    case 1:
        cout << "It's monday" << endl;
        break;
    case 2:
        cout << "It's tuesday" << endl;
        break;
    case 3:
        cout << "It's wednesday" << endl;
        break;
    case 4:
        cout << "It's thursday" << endl;
        break;
    case 5:
        cout << "It's friday" << endl;
        break;
    case 6:
        cout << "It's saturday" << endl;
        break;
    default:
        break;
    }
    return 0;
}