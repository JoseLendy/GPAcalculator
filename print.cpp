#include "print.hpp"
#include <iostream>
#include <algorithm>
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
void maxGPA(const Student &student){
    double max = 0;
    Student::Data ans;
    for(const auto&course : student.courses){
        if(course.credit * course.gpa_grade > max){
            max = course.credit * course.gpa_grade;
            ans = course;
        }
    }
    std::cout << "The highest score is " << ans.course << " with GPA of " << ans.gpa_grade << std::endl;
}

void max_100(const Student &student){
    double max = 0;
    Student::Data ans;
    for(const auto&course : student.courses){
        if(course.credit * course.gpa_grade > max){
            max = course.credit * course.gpa_grade;
            ans = course;
        }
    }
    std::cout << "The highest score is " << ans.course << " with GPA of " << ans.gpa_100 << std::endl;
}