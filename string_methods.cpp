#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main(){
    string name;
    getline(cin, name);

    if(name.length() > 12){ //length)()
        cout << "Name can't be longer than 12 characters!\n";
    } else if(name.empty()){ // empty()
        cout << "Name cannot be empty!\n";
    } else {
        cout << "\nHello " << name ;
        cout << "\nYour username is now " << name.append("@gmail.com") << endl; //append()
    }
    cout << "\nCharacter at position 1 " << name.at(0); //at() 
    cout << "\nAfter inserting '@' at position 1 " << name.insert(3, "@") << endl;
    cout << "\nFinding l in my name.\n";
    cout << name.find('l') << " position at in name." << endl;
    cout << name; 
    name.clear(); //clear()
    cout << "\nName after clearing : " << name <<endl;
    return 0;
}