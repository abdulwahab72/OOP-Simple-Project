#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Student::addResult(const Result& result) {
    results.push_back(result);
}

void Student::displayResults(const  vector<Course>& courses) const {
    double totalGPA = 0.0;
    int totalCredits = 0;

     cout << "Results for " << name << " (ID: " << id << "):\n";
    for (const auto& result : results) {
        auto it =  find_if(courses.begin(), courses.end(),
            [&result](const Course& course) { return course.getCode() == result.getCourse().getCode(); });

        if (it != courses.end()) {
             cout << it->getName() << ": " << result.getGrade() << " (GPA: " << result.getGradePoints() << ")\n";
            totalGPA += result.getGradePoints() * it->getCredits();
            totalCredits += it->getCredits();
        }
    }

    if (totalCredits > 0) {
        double gpa = totalGPA / totalCredits;
         cout << "Overall GPA: " <<  fixed <<  setprecision(2) << gpa << "\n";
    }
}
