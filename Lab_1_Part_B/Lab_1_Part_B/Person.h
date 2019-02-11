#pragma once
#ifndef Person_h
#define Person_h
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class Person
{
public:
	//Person();
	Person(string); // initialise the name
	virtual void printname();
	//soperator+(const string& lhs, const string& rhs);
protected:
	string name;
	double value;
};




#endif // !Person_h
