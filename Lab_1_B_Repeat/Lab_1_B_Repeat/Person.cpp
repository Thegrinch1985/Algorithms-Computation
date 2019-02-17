#include "Person.h"
#include "iostream"
using namespace std;
Person::Person()
{
}

Person::~Person()
{
}

Person::Person(string s)
{
	name = s;
}

void Person::printname()
{
	cout << "Name : " << name << endl;
}

bool Person::operator<(const Person & second) const
{
	return (name) < second.name;
}

bool Person::sortByName(Person & p, Person & p2)
{
	return p.getName() < p2.getName();
}

string Person::getName()
{
	return name;
}


