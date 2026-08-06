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
    double credits = 0;
    for(const auto &course : student.courses){
        total += calculateGPA(course);
        credits += course.credit;
    }
    return credits > 0 ? total / credits : 0.0;
}
double calculateTotal_100(const Student &student){
    double total = 0;
    double credits = 0;
    for(const auto &course : student.courses){
        total+=calculate_100(course);
        credits+=course.credit;
    }
    return credits > 0 ? total / credits : 0.0;
}
