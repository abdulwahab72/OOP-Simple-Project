#include "Course.h"
#include<iostream>
using namespace std;

Course::Course(int code,  string name, int credits) : code(code), name(name), credits(credits) {}

int Course::getCode() const {
    return code;
}

 string Course::getName() const {
    return name;
}

int Course::getCredits() const {
    return credits;
}
