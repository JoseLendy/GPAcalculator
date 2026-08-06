#include <iostream>
#include "input.hpp"
#include "calculate.hpp"

int main(){
    Student student;
    std::cout << "Enter student name: ";
    std::getline(std::cin, student.name);
    int num_courses;
    std::cout << "Enter number of courses: ";
    std::cin >> num_courses;
    std::cin.ignore();

    for(int i = 0; i < num_courses; ++i){
        Student::Data course_data;
        input(course_data);
        student.courses.push_back(course_data);
    }

    student.total_gpa = calculateTotalGPA(student);
    student.total_100 = calculateTotal_100(student);

    std::cout << "Student Name: " << student.name << std::endl;
    std::cout << "Total GPA: " << student.total_gpa << std::endl;
    std::cout << "Total GPA (100 scale): " << student.total_100 << std::endl;

    return 0;
}