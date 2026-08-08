#ifndef INPUT_HPP
#define INPUT_HPP

#include <string>
#include <vector>
struct Student{
    std::string name;
    double total_gpa = 0;
    double total_100 = 0;
    double total_credit = 0;
    struct Data {
        std::string course;
        float gpa_grade = 0;
        float gpa_100 = 0;
        float credit = 0;
    };
    std::vector<Data> courses;
};
void input(Student::Data &data);

// Discards the remainder of the current input line, including the newline that
// operator>> leaves behind.
void flushLine();

// Prompts until the user enters a number >= min_value. Returns min_value if the
// input stream ends first.
double readNumber(const std::string &prompt, double min_value);
#endif