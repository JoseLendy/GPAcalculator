#ifndef INPUT_HPP
#define INPUT_HPP

#include <string>
#include <vector>
struct Student{
    std::string name;
    double total_gpa;
    double total_100;
    double total_credit;
    struct Data {
        std::string course;
        float gpa_grade;
        float gpa_100;
        float credit;
    };
    std::vector<Data> courses;
};
void input(Student::Data &data);
#endif