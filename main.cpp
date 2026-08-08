#include <iostream>
#include "input.hpp"
#include "calculate.hpp"
#include "print.hpp"
#include <iomanip>

int main(){
    Student student;
    std::cout << "Enter student name: ";
    std::getline(std::cin, student.name);
    int num_courses = static_cast<int>(readNumber("Enter number of courses: ", 0));

    for(int i = 0; i < num_courses; ++i){
        Student::Data course_data;
        input(course_data);
        student.courses.push_back(course_data);
    }

    student.total_gpa = calculateTotalGPA(student);
    student.total_100 = calculateTotal_100(student);
    student.total_credit = calculate_total_credit(student);

    printStudentData(student);
    maxGPA(student);
    max_100(student);

    double target = calculate_gpa_target(student, 4, 10);
    std::cout << "Need to get minimum of total score " << std::fixed << std::setprecision(5) << target << " to reach " << std::endl;
    return 0;
}