#include <iostream>
#include <string>
#include "student.h";

using namespace std;

// accessor/getter functions

int Student::fetchStudentId() {
    return studentId;
}

string Student::fetchFirstName() {
    return firstName;
}

string Student::fetchLastName() {
    return lastName;
}

string Student::fetchEmailAddress() {
    return emailAddress;
}

int Student::fetchAge() {
    return age;
}

string Student::fetchDegreeProgram() {
    return degreeProgram;
}

// mutator/setter functions

void Student::setStudentId(string data) {
    studentId = data;
}

void Student::setFirstName(string data) {
    firstName = data;
}

void Student::setLastName(string data) {
    lastName = data;
}

void Student::setEmailAddress(string data) {
    emailAddress = data;
}

void Student::setAge(int data) {
    age = data;
}

void Student::setDegreeProgram(string data) {
    degreeProgram = data;
}

// print functions
void Student::printIntType(int data) {
    cout << data << endl;
}

void Student::printStringType(string data) {
    cout << data << endl;
}
