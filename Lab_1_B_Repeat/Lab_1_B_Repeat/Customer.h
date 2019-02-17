#pragma once
#ifndef Customer_h
#define Customer_h
#include "Person.h"
#include <string>
using namespace std;
class Customer:public Person
{
public:
	Customer(string, string);
	void printname();
	string getMessage();



private:
	string message;

};


#endif // !Customer_h

