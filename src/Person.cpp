#include "Person.h"
#include <iostream>

Person::Person(const std::string& n, int a)
	: 
	name(n), 
	age(a) 
{}

void Person::setName(const std::string& n) 
{
	name = n;
}

void Person::setAge(int a) 
{
	age = a;
}

std::string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}

void Person::display() const 
{
	std::cout << "Information about student:" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}