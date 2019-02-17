#pragma once
#ifndef Employee_h
#define Employee_h
#include "Person.h"

class Employee : public Person
{

public:

	Employee(string,double);
	void printname();
	double getSalary();

private:
	double salary;

};
#endif // !1

