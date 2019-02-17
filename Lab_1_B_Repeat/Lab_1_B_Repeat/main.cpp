#include "Person.h"
#include "Employee.h"
#include "iostream"
#include "Customer.h"
#include "vector"
using namespace std;

int main() {

	vector<Person *>personVector;
	Person *personPtr;
	Person p1 = Person("Howie");
	//personPtr = &p1;
	//personPtr.printname();
	//personPtr->printname();
	Employee e1 = Employee("Arron", 20);
	//personPtr = &e1;
	//personPtr->printname();
	Customer c1 = Customer("Maeve", "Hi im maeve");
	personPtr = &c1;
	//personPtr->printname();

	personVector.push_back(&p1);
	personVector.push_back(&e1);
	personVector.push_back(&c1);

	for (int i = 0; i < personVector.size(); i++) {
	
	

		personVector[i]->printname();
	}

	for (int i = 0; i < personVector.size(); i++) {
		//personVector[i]->sortByName(i, i + 1);
	}
	//sort(personVector.begin(), personVector.end(), personPtr->sortByName);
	system("pause");





}
