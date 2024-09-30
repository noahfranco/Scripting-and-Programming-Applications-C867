#include <iostream>
#include <string>

using namespace std;

class Roster {
    public:
        int *classRosterArray;

        // void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, int degreeProgram);
        void add(string studentID, string firstName);

        void printAll(string data);
};    