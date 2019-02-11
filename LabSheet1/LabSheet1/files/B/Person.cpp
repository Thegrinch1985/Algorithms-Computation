#include "Person.h"

Person::Person(string s)
{
	name = s;
}

void Person::printname()
{
	cout << "\nName : " << name;
}


