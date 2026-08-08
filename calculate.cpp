#include <iostream>
#include "calculate.hpp"

double calculateGPA(const Student::Data &data){
    return (data.gpa_grade * data.credit);
}
double calculate_100(const Student::Data &data){
    return (data.gpa_100 * data.credit);
}
double calculateTotalGPA(const Student &student){
    double total = 0;
    double credits = calculate_total_credit(student);
    for(const auto &course : student.courses){
        total += calculateGPA(course);
    }
    return credits > 0 ? total / credits : 0.0;
}
double calculateTotal_100(const Student &student){
    double total = 0;
    double credits = calculate_total_credit(student);
    for(const auto &course : student.courses){
        total+=calculate_100(course);
    }
    return credits > 0 ? total / credits : 0.0;
}

double calculate_total_credit(const Student &student){
    double credit = 0;
    for(const auto&course : student.courses){
        credit += course.credit;
    }
    return credit;
}
