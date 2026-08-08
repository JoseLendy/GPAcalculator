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

double calculate_gpa_target(const Student &student, float target_gpa, float credit_taken){
    double cur_tot_credit = student.total_credit;
    double cur_gpa = student.total_gpa;
    double cur_tot_gpa = cur_tot_credit * cur_gpa;

    double need_tot_gpa = target_gpa * (cur_tot_credit + credit_taken) - cur_tot_gpa;

    return need_tot_gpa;
}