#include <iostream>
#include <string>
#include "student.h"
#include "../degree.h"

using namespace std;

// D.2.d
// constructor declaration
Student::Student(string studentId, string firstName, string lastName, string email, int age, int daysInCourseOne, int daysInCourseTwo, int daysInCourseThree, int degree) {
    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = email;
    this->age = age;
    // is there a cleaner way to do this by storing each prev value in an array?
    this->daysInCourse[0] = daysInCourseOne;
    this->daysInCourse[1] = daysInCourseTwo;
    this->daysInCourse[2] = daysInCourseThree;
    this->degreeProgram = degree;

}

// D.2.a
// accessor/getter functions
string Student::fetchStudent(string data) {
    if (data == "email") {
        return this->emailAddress;
    } else if (data == "studentId") {
        return this->studentId;
    }

    return 0;
}

double Student::fetchStudentAvgDaysInCourse(string data) {
    // do I need this if condition since we're in a for loop? - E.3.d: "The student is identified by the studentID parameter"
    if (this->studentId == data) {
        // find avg logic
        double sum = 0;
        for (int i = 0; i < 3; i++) {
             sum += daysInCourse[i];
        }
    
        return sum / 3;
    }

    return 0;
}

void Student::fetchByDegreeProgram(int data) {
    if (this->degreeProgram == data) {
        print();
    }
}

string Student::formatDegreeProgram() {
    switch (this->degreeProgram)
    {
    case SECURITY:
        return "SECURITY";
    case NETWORK:
        return "NETWORK";
    case SOFTWARE:
        return "SOFTWARE";
    default:
        break;
    }

    return "";
}

// D.2.b
// mutator/setter functions
bool Student::setStudent(string data) {
    if (this->studentId == data) {
        return true;
    }

    return false;
}

// D.2.e
void Student::print() {
    string degree = formatDegreeProgram();

    cout << this->studentId << " " << "First Name: " << this->firstName << " " << "Last Name: " << this->lastName << " " << "Age: " << this->age << " " << "Days in Course: " << "{" << this->daysInCourse[0] << "," << this->daysInCourse[1] << "," << this->daysInCourse[2] << "}" << " " << "Degree Program: " << degree << endl;
}
