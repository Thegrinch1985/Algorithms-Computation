#include "Employee.h"
#include "Person.h"


#include "iostream"
using namespace std;
Employee::Employee(string s,double d)
	:Person(s),salary(d)
{
	
}

void Employee::printname()
{
	cout << "Name " << name << " Salary : "<<getSalary() << endl;
}



double Employee::getSalary()
{
	return salary;
}
