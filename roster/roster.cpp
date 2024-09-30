#include <iostream>
#include <string>
#include "roster.h"

using namespace std;


// void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, int degreeProgram) {
//     // logic from roster.cpp add function?
//     cout << "studentId: " << studentID << endl;
// };

void Roster::add(string studentID, string firstName) {
    cout << "Displaying all students: " << endl;
    cout << studentID << " " << firstName << endl;
}

void Roster::printAll(string data) {
    cout << data << endl;
};