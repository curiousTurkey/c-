#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// int max (int x, int y){
//     return (x > y) ? x : y ;
// }
// double max(double x, double y){
//     return (x > y) ? x : y ;
// }
// char max(char x, char y){
//     return (x > y) ? x : y ;
// }
// the above is function overloading
template <typename T, typename U> // two typename for two different datatypes
// the auto keyword helps the compiler to decide which type needs to be returned 
// auto max (T x, U y){ 
//     return (x > y) ? x : y ;
// }
//decltype to use in c++ version that doesn't support auto keyword
decltype(true ? T(): U()) max (T x, U y){ 
    return (x > y) ? x : y ;
}
int main(){
    //function template : describes what a function looks like. can be used to generate as many overloaded functions as needed each using different datatypes
    cout << max(2,9.6) << endl;
    return 0;
}