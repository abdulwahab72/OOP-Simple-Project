#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <vector>
#include <string>
#include "Student.h"
#include "Course.h"
#include<iostream>
using namespace std;
class University {
private:
     vector<Student> students;
     vector<Course> courses;

public:
    void addStudent(int id,  string name);
    void addCourse(int code,  string name, int credits);
    void recordResult(int studentId, int courseCode, int score);
    void displayStudentResults(int studentId) const;
};

#endif // UNIVERSITY_H
