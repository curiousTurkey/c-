#include <iostream>
#include <vector>
using std::cout;
using std::endl;
typedef std::vector<std::pair<std::string, int>> pairlist_t; 
typedef std::string text_t;
//another way using  "using"

using number_t = int;
int main(){
    pairlist_t pairlist;
    text_t firstName = "Eldhose";
    cout<<firstName << endl;
    number_t age = 22;
    cout<<age;
    return 0;
}