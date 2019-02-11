#include "Customer.h"
#include "Person.h"
#include "Employee.h"
#include <vector>
#include <iomanip>
#include <string>
using namespace std;
int main() {

	Person * personPtr;

	//vector<Person *> personPtr(3);
	
	Person p1 = Person("Howie");

	//personPtr.push_back(p1);
	personPtr = &p1;
	personPtr->printname();
	Employee e1 = Employee("Tom ", 34000);

	//personPtr.push_back(e1);
	personPtr = &e1;
	personPtr->printname();
	Customer c1 = Customer("Arron", "This is a digrace");

	//personPtr.push_back(c1);
	personPtr = &c1;
	personPtr->printname();



	system("pause");
	


}