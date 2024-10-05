#include <iostream>
#include <string>
#include "./roster/roster.h"
#include "degree.h"

using namespace std;

void programDetails() {
    cout << "Course Title: Scripting and Programming - Applications - C867" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 011295092" << endl;
    cout << "Student Name: Noah Franco" << "\n" << endl;
}

int main() {
    // F.1
    programDetails();

    string studentData[5] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Noah,Franco,nfra190@wgu.edu,26,11,20,34,SOFTWARE"};
    
    // F.2
    Roster classRoster;

    cout << "Displaying all students " << endl;
    for (int i = 0; i < 5; i++) {
        size_t rhs = studentData[i].find(",");
        string student = studentData[i].substr(0, rhs);

        // Student Id 
        string studentID = studentData[i].substr(0, studentData[i].find(","));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        // First Name 
        string firstName = studentData[i].substr(0, studentData[i].find(","));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        // Last Name
        string lastName = studentData[i].substr(0, studentData[i].find(","));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        // Email Address
        string email = studentData[i].substr(0, studentData[i].find(","));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        // Age 
        int age = stoi(studentData[i].substr(0, studentData[i].find(",")));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        // Days in Course
        int daysInCourseOne = stoi(studentData[i].substr(0, studentData[i].find(",")));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        int daysInCourseTwo = stoi(studentData[i].substr(0, studentData[i].find(",")));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        int daysInCourseThree = stoi(studentData[i].substr(0, studentData[i].find(",")));
        studentData[i].erase(0, studentData[i].find(",") + 1);

        // Degree Program
        string degree = studentData[i].substr(0, studentData[i].find(","));

        int enumDegree;
        if (degree == "SECURITY") {
            enumDegree = SECURITY;
        } else if (degree == "NETWORK") {
            enumDegree = NETWORK;
        } else if (degree == "SOFTWARE") {
            enumDegree = SOFTWARE;
        }

        // F.3
        classRoster.add(studentID, firstName, lastName, email, age, daysInCourseOne, daysInCourseTwo, daysInCourseThree, enumDegree);
    }

    // F.4
    classRoster.printAll();
    classRoster.printInvalidEmails();

    for (int i = 0; i < 5; i++) {
        string studentId = classRoster.classRosterArray[i]->fetchStudent("studentId");

        classRoster.printAverageDaysInCourse(studentId);
    }

    // Need to pass SOFTWARE enum here
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}