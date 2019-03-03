#include "Person.h"
#include "Employee.h"
#include "iostream"
#include "Customer.h"
#include "vector"
#include <algorithm>
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

	Person p2 = Person("Mudiaga");
	Person p3 = Person("Mukoro");
	Person p5 = Person("Thomas");
	personVector.push_back(&p1);
	personVector.push_back(&e1);
	personVector.push_back(&c1);
	personVector.push_back(&p2);
	personVector.push_back(&p3);
	personVector.push_back(&p5);

	for (int i = 0; i < personVector.size(); i++) {
	
		personVector[i]->printname();
	}
	std::sort(begin(personVector), end(personVector), [](Person* a, Person* b) { return *a < *b; });
	cout << "sorted "<< endl;
	//sort(begin(personVector), end(personVector, [](Person *a, Person *b) {return *a < *b; });
	for (int i = 0; i < personVector.size(); i++) {
		//personVector[i]->sortByName(i, i + 1);

		personVector[i]->printname();
	}
	//sort(personVector.begin(), personVector.end(), personPtr->sortByName);
	system("pause");





}
