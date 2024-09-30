#include <iostream>
#include <string>
#include "./roster/roster.h"

using namespace std;

void programDetails() {
    cout << "Course Title: Scripting and Programming - Applications - C867" << std::endl;
    cout << "Language: C++" << std::endl;
    cout << "Student ID: 011295092" << std::endl;
    cout << "Student Name: Noah Franco" << std::endl;
}

int main() {
    programDetails();

    string studentData[5] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Noah,Franco,nfra190@wgu.edu,26,11,20,34,SOFTWARE"};
    int studentDataSize = sizeof(studentData) / sizeof(studentData[0]);
    
    Roster roster;

    // E.2.a
    for (int i = 0; i < studentDataSize; i++) {
        // E.2.b
        size_t rhs = studentData[i].find(",");
        string student = studentData[i].substr(0, rhs);

        // student id 
        size_t lhs = rhs - 2;
        rhs = studentData[i].find(",", lhs);
        string studentID = studentData[i].substr(lhs, rhs - lhs);

        // first name 
        size_t hello = rhs + 1;
        rhs = studentData[i].find(",", hello);
        string firstName = studentData[i].substr(hello, rhs - hello);

        roster.add(studentID, firstName);


    // for age -> int studentId = stoi(studentData[i].substr(lhs, rhs - lhs)); 
    }

    return 0;
}