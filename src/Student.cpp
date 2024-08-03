#include "Student.h"
#include <iostream>

Student::Student(const std::string& n, int a, int id, double g)
    : 
    Person(n, a), 
    studentID(id), 
    gpa(g) 
{}

void Student::setStudentID(int id) 
{
    studentID = id;
}

void Student::setGPA(double g)
{
    gpa = g;
}

int Student::getStudentID() const 
{
    return studentID;
}

double Student::getGPA() const 
{
    return gpa;
}

void Student::display() const 
{
    Person::display();
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "GPA: " << gpa << std::endl;

}
