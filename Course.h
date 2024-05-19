#pragma once
#ifndef COURSE_H
#define COURSE_H

#include<iostream>
using namespace std;
#include <string>

class Course {
private:
    int code;
     string name;
    int credits;

public:
    Course(int code,  string name, int credits);
    int getCode() const;
     string getName() const;
    int getCredits() const;
};

#endif // COURSE_H
