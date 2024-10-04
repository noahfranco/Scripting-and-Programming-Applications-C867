#include <iostream>
#include <string>
#include "roster.h"

using namespace std;

int counter = -1;

// E.3.a
void Roster::add(string studentID, string firstName, string lastName, string email, int age, int daysInCourseOne, int daysInCourseTwo, int daysInCourseThree, int degree) {
    counter += 1;

    // updates the roster classRosterArray pointer.
    classRosterArray[counter] = new Student(studentID, firstName, lastName, email, age, daysInCourseOne, daysInCourseTwo, daysInCourseThree, degree);
}

// E.3.b
void Roster::remove(string data) {
    cout << "Removing" << " " << data << endl;
    bool hasFoundStudent = false;

    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            bool isSelectedStudent = classRosterArray[i]->setStudent(data);

            if (isSelectedStudent && classRosterArray[i] != nullptr) {
                delete classRosterArray[i];
                classRosterArray[i] = nullptr;
                hasFoundStudent = true;
            }

            // end loop since we deleted student by student id
            if (hasFoundStudent == true) {
                break;
            }

            // we iterated through the whole array and didn't find student id so we print message
            if (hasFoundStudent == false && i == 4) {
                cout << "Student with" << " " << data << " " << "was not found" << endl;  
            }
        }
    }
}

// E.3.c
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
};

// E.3.d
void Roster::printAverageDaysInCourse(string studentId) {

    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->fetchStudent("studentId") == studentId) {
            double avgDaysInCourse = classRosterArray[i]->fetchStudentAvgDaysInCourse(studentId);
            cout << "Average Days In Course: " << avgDaysInCourse << endl;
            return;
        }
    }

    return;
}

// E.3.e
void Roster::printInvalidEmails() {
    // A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    string invalidEmail[3];
    for (int i = 0; i < 5; i++) {
        string email = classRosterArray[i]->fetchStudent("email");

        size_t isAt = email.find("@");
        if (isAt == string::npos) {
            invalidEmail[0] = email;
        }

        size_t isPeriod = email.find(".");
        if (isPeriod == string::npos) {
            invalidEmail[1] = email;
        }

        size_t isSpace = email.find(" ");
        if (isSpace != string::npos) {
            invalidEmail[2] = email;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Invalid email: " << invalidEmail[i] << endl;
    }
}

// E.3.f
// Need to pass enum here
void Roster::printByDegreeProgram(int data) {
    cout << "Degree Program" << endl;

     for (int i = 0; i < 5; i++) {
        classRosterArray[i]->fetchByDegreeProgram(data);
     } 
}