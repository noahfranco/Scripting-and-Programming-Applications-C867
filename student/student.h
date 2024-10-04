#include <iostream>
#include <string>

// #include "../degree.h"

using namespace std;

// D.1
class Student {
    // constructor 
    private:
        string studentId;
        string firstName;
        string lastName;    
        string emailAddress;
        int age;
        int daysInCourse[3];
        // string degreeProgram;
        int degreeProgram;

    public:
        // constructor declaration
        Student(string studentId, string firstName, string lastName, string email, int age, int daysInCourseOne, int daysInCourseTwo, int daysInCourseThree, int degree);

        // destructor is not needed since daysInCourse is not set dynamically
        // ~Student() {} 

        // accessor/getter functions
        string fetchStudent(string data);

        double fetchStudentAvgDaysInCourse(string data);

        void fetchByDegreeProgram(int data);

        string formatDegreeProgram();

        // mutator/setter functions
        bool setStudent(string studentId);

        // print function
        void print();
};