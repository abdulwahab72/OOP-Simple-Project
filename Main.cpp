#include <iostream>
#include "University.h"
using namespace std;
void addStudents(University& uni) {
    int numStudents;
     cout << "Enter number of students: ";
     cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        int id;
         string name;
         cout << "Enter ID for student " << i + 1 << ": ";
         cin >> id;
         cout << "Enter name for student " << i + 1 << ": ";
         cin.ignore();
         getline( cin, name);
        uni.addStudent(id, name);
    }
}

void addCourses(University& uni) {
    int numCourses;
     cout << "Enter number of courses: ";
     cin >> numCourses;

    for (int i = 0; i < numCourses; ++i) {
        int code, credits;
         string name;
         cout << "Enter code for course " << i + 1 << ": ";
         cin >> code;
         cout << "Enter name for course " << i + 1 << ": ";
         cin.ignore();
         getline( cin, name);
         cout << "Enter credits for course " << i + 1 << ": ";
         cin >> credits;
        uni.addCourse(code, name, credits);
    }
}

void recordResults(University& uni) {
    int numResults;
     cout << "Enter the number of results to record: ";
     cin >> numResults;

    for (int i = 0; i < numResults; ++i) {
        int studentId, courseCode, num;
         cout << "Recording result " << i + 1 << " of " << numResults << ":\n";
         cout << "Enter student ID: ";
         cin >> studentId;
         cout << "Enter course code: ";
         cin >> courseCode;
         cout << "Enter numbers: ";
         cin >> num;
        uni.recordResult(studentId, courseCode, num);
    }
}

void displayResults(const University& uni) {
    int studentId;
     cout << "Enter student ID to display results: ";
     cin >> studentId;
    uni.displayStudentResults(studentId);
}

int main() {
    University uni;

    addStudents(uni);
    addCourses(uni);
    recordResults(uni);

    char choice;
    do {
        displayResults(uni);
         cout << "Do you want to display results for another student? (y/n): ";
         cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
