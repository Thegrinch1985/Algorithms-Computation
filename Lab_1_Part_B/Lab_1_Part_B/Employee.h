#pragma once
#ifndef Employee_h
#define Employee_h
#include "Person.h"
using namespace std;
class Employee : public Person
{
public:
	virtual void printname();
	Employee(string,double);



private:
	double salary;

};


#endif // !Employee_h
