#include <iostream>
#include <string>

// #include “degree.h”;

using namespace std;

class Student {
    // constructor 
    public:
        string studentId;
        string firstName;
        string lastName;    
        string emailAddress;
        int age;
        int daysInCourse[3];
        string degreeProgram;

        // accessor/getter functions

        int fetchStudentId();

        string fetchFirstName();

        string fetchLastName();

        string fetchEmailAddress();

        int fetchAge();

        string fetchDegreeProgram();

        // mutator/setter functions

        void setStudentId(string data);

        void setFirstName(string data);

        void setLastName(string data);

        void setEmailAddress(string data);

        void setAge(int data);

        void setDegreeProgram(string data);

        // print functions
        void printIntType(int data);

        void printStringType(string data);
};