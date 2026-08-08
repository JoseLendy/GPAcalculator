#pragma once
#include "input.hpp"

double calculateGPA(const Student::Data &data);
double calculate_100(const Student::Data &data);
double calculateTotalGPA(const Student &student);
double calculateTotal_100(const Student &student);
double calculate_total_credit(const Student &student);
double calculate_gpa_target(const Student &student, float target_gpa, float credit_taken);
