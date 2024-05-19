#include "Result.h"

Result::Result(Course course, int numbers) : course(course), numbers(numbers) {
    // Determine grade based on numeric score
    if (numbers > 85 && numbers <= 100) grade = 'A';
    else if (numbers > 81 && numbers <= 85) grade = 'A';
    else if (numbers > 78 && numbers <= 81) grade = 'B';
    else if (numbers > 74 && numbers <= 78) grade = 'B';
    else if (numbers > 70 && numbers <= 74) grade = 'B';
    else if (numbers > 67 && numbers <= 70) grade = 'C';
    else if (numbers > 64 && numbers <= 67) grade = 'C';
    else if (numbers > 60 && numbers <= 64) grade = 'C';
    else if (numbers > 50 && numbers <= 60) grade = 'D';
    else grade = 'F';
}

Course Result::getCourse() const {
    return course;
}

int Result::getNumbers() const {
    return numbers;
}

char Result::getGrade() const {
    return grade;
}

double Result::getGradePoints() const {
    if (numbers > 85 && numbers <= 100) return 4.0;
    else if (numbers > 81 && numbers <= 85) return 3.7;
    else if (numbers > 78 && numbers <= 81) return 3.3;
    else if (numbers > 74 && numbers <= 78) return 3.0;
    else if (numbers > 70 && numbers <= 74) return 2.7;
    else if (numbers > 67 && numbers <= 70) return 2.3;
    else if (numbers > 64 && numbers <= 67) return 2.0;
    else if (numbers > 60 && numbers <= 64) return 1.7;
    else if (numbers > 50 && numbers <= 60) return 1.0;
    else return 0.0;
}
