#pragma once
#include <string>

class Person 
{
private:
	std::string name;
	int age;

public:

	//Constructor
	Person(const std::string& n, int a);

	//Setter methods
	void setName(const std::string& n);
	void setAge(int a);

	//Getter Methods
	std::string getName() const;
	int getAge() const;

	virtual void display() const;
	
};