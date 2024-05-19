#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <map>
#include "Course.h"
#include "Result.h"
#include<iostream>
using namespace std;
class Student {
private:
    int id;
    string name;
    vector<Result> results; // Use a vector to store results

public:
    Student(int id, const  string& name) : id(id), name(name) {}
    int getId() const { return id; }
    void addResult(const Result& result); // Changed to take Result object
    void displayResults(const  vector<Course>& courses) const;
};

#endif // STUDENT_H
