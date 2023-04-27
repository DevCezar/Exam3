#include<iostream>
#include"exam3.h"
using namespace std;

int main () {
    classList student("Cesar", 1234);
    student.addClass("CHM 121");
    student.addClass("CSC 121");
    student.display();

    cout << "\n\n\n";

    classList fakeStudent("Jon Doe", 4321);
    fakeStudent.addClass("MTH 200");
    fakeStudent.addClass("PHY 101");
    fakeStudent.display();

}