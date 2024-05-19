#ifndef RESULT_H
#define RESULT_H

#include "Course.h"
#include<iostream>
using namespace std;
class Result {
private:
    Course course;
    int numbers; // Numeric score
    char grade;

public:
    Result(Course course, int numbers);

    Course getCourse() const;
    int getNumbers() const;
    char getGrade() const;
    double getGradePoints() const; // Renamed from getNumbersPoint
};

#endif // RESULT_H
