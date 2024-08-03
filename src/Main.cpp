#include <iostream>

#include "Student.h"
using namespace std;

int main () 
{
	string name;
	int age, studentID;
	double gpa;

	cout << "Enter student name:";
	getline(cin, name);
	cout << "Enter student age:";
	cin >> age;
	cout << "Enter student ID:";
	cin >> studentID;
	cout << "Enter student GPA:";
	cin >> gpa;

	cout << "---------------------------------------------" << endl;
	cout << "Result:" << endl;

	Student student(name, age, studentID, gpa);

	student.display();

	return 0;
}