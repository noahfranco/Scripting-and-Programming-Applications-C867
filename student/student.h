#include <iostream>
#include <string>
// #include “../degree.h”

using namespace std;

class Student {
    // constructor 
    public:
        int studentId;
        string firstName;
        string lastName;    
        string emailAddress;
        int age;
        // int daysInCourse[1];
        string degreeProgram;

        // accessor/getter functions

        int fetchStudentId() {
            return studentId;
        }

        string fetchFirstName() {
            return firstName;
        }

        string fetchLastName() {
            return lastName;
        }

        string fetchEmailAddress() {
            return emailAddress;
        }

        int fetchAge() {
            return age;
        }

        string fetchDegreeProgram() {
            return degreeProgram;
        }

        // mutator/setter functions

        void setStudentId(int data) {
            studentId = data;
        }

        void setFirstName(string data) {
            firstName = data;
        }

        void setLastName(string data) {
            lastName = data;
        }

        void setEmailAddress(string data) {
            emailAddress = data;
        }

        void setAge(int data) {
            age = data;
        }

        void setDegreeProgram(string data) {
            degreeProgram = data;
        }

        // print function
        void printIntType(int data) {
            cout << data << endl;
        }

        void printStringType(string data) {
            cout << data << endl;
        }
};