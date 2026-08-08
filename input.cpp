#include <iostream>
#include <limits>
#include "input.hpp"

void flushLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double readNumber(const std::string &prompt, double min_value) {
    double value = 0;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value >= min_value) {
            flushLine();
            return value;
        }
        if (std::cin.eof()) {
            std::cout << std::endl;
            return min_value;
        }
        std::cin.clear();
        flushLine();
        std::cout << "Please enter a number >= " << min_value << "." << std::endl;
    }
}

void input(Student::Data &data) {
    std::cout << "Enter course name : ";
    std::getline(std::cin, data.course);
    data.gpa_grade = readNumber("Enter GPA grade : ", 0);
    data.gpa_100 = readNumber("Enter GPA 100 : ", 0);
    data.credit = readNumber("Enter credit : ", 0);
}
