#include <iostream>
#include "input.hpp"
void input(Student::Data &data) {
    std::cout << "Enter course name : "; 
    std::getline(std::cin, data.course);
    std::cout << "Enter GPA grade : ";
    std::cin >> data.gpa_grade;
    std::cout << "Enter GPA 100 : ";
    std::cin >> data.gpa_100;
    std::cout << "Enter credit : ";
    std::cin >> data.credit;
    std::cin.ignore();
}