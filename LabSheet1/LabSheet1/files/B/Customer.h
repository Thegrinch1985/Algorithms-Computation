#pragma once
#ifndef Customer_h
#define Customer_h
#include "Person.h"
using namespace std;
class Customer :public Person
{
public:
	virtual void printname();
	Customer(string,string);



private:
	string message;

};



#endif // !Customer_h

