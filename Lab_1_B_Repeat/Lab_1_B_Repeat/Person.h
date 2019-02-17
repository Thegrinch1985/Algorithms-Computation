#pragma once
#ifndef person_h
#define person_h
#include <string>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	Person(string);
	virtual void printname();
	//friend ostream& operator <<(ostream&, const Person& name);
	bool operator<(const Person& second) const;
	bool sortByName(Person &p, Person &p2);

protected:
	string name;


private:
	string getName();
};



#endif // !person_h
