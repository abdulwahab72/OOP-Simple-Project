#include "University.h"
#include "Result.h"
#include <iostream>
using namespace std;
void University::addStudent(int id,  string name) {
    students.emplace_back(id, name);
}

void University::addCourse(int code,  string name, int credits) {
    courses.emplace_back(code, name, credits);
}

void University::recordResult(int studentId, int courseCode, int score) {
    for (auto& student : students) {
        if (student.getId() == studentId) {
            Course* course = nullptr;
            for (auto& c : courses) {
                if (c.getCode() == courseCode) {
                    course = &c;
                    break;
                }
            }
            if (course) {
                Result result(*course, score);
                student.addResult(result);
            }
            else {
                 cerr << "Course code " << courseCode << " not found.\n";
            }
            return;
        }
    }
     cerr << "Student ID " << studentId << " not found.\n";
}

void University::displayStudentResults(int studentId) const {
    for (const auto& student : students) {
        if (student.getId() == studentId) {
            student.displayResults(courses);
            return;
        }
    }
     cerr << "Student ID " << studentId << " not found.\n";
}
