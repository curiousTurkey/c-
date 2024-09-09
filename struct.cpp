#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct student
{
    string name;
    double gpa;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "Eldhose";
    student1.enrolled = true;
    student1.gpa = 4.1;

    student student2;
    student2.name = "Changqing";
    student2.gpa = 4.3;
    student2.enrolled = false;

    cout << "Student 1 : " << endl << "Name: " << student1.name << endl << "GPA: " << student1.gpa << endl << "Enrolled : " << (student1.enrolled) << endl;
    cout << "Student 2 : " << endl << "Name: " << student2.name << endl << "GPA: " << student2.gpa << endl << "Enrolled : " << (student2.enrolled) << endl;
    return 0;
}
