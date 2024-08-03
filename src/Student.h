#pragma once

#include "Person.h"

class Student : public Person 
{
private:
	int studentID;
	double gpa;

public:

	//Student constructor
	Student(const std::string& n, int a, int id, double g);

	//Setter methods
	void setStudentID(int id);
	void setGPA(double g);

	int getStudentID() const;
	double getGPA() const;

	void display() const override;
};