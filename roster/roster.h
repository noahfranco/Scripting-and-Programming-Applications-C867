#include <iostream>
#include <string>
#include "../student/student.h"

// #include "../degree.h"

using namespace std;
class Roster {
    public:
        Student* classRosterArray[5];

        ~Roster() {
            for (int i = 0; i < 5; i++) {
                if (classRosterArray[i] != nullptr) {
                    delete classRosterArray[i];
                    cout << "Student record deleted" << endl;
                }
            }
        }   

        void add(string studentID, string firstName, string lastName, string email, int age, int daysInCourseOne, int daysInCourseTwo, int daysInCourseThree, int degree);

        void remove(string data);

        void printAll();

        void printAverageDaysInCourse(string studentId);

        void printInvalidEmails();

        void printByDegreeProgram(int data);
};    