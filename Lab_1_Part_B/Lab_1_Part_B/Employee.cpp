#include "Employee.h"

void Employee::printname()
{
	cout << "\nName :" << name << " Salary :" << salary << endl;
}

Employee::Employee(string n, double d)
	:Person(n), salary (d)
{
	
	//salary = d;
}
