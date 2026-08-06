#include "print.hpp"
#include <iostream>

void printStudentData(const Student &student){
    std::cout << "Student Name : " << student.name << std::endl;
    std::cout << "Total GPA : " << student.total_gpa << std::endl;
    std::cout << "Total GPA (100 scale) : " << student.total_100 << std::endl;
    std::cout << "Courses : " << std::endl;
    std::cout << "Course name\tGPA grade\tGPA 100\tCredit" << std::endl;
    for(const auto &course : student.courses){
        std::cout << course.course << "\t" << course.gpa_grade << "\t" << course.gpa_100 << "\t" << course.credit << std::endl;
    }
    
}