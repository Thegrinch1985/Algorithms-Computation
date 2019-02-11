#include "Customer.h"

void Customer::printname()
{
	cout << "\nName : " << name << " Message of Complaint " << message << endl;
}

Customer::Customer( string n, string s)
	:Person(n), message(s)
{
	//name = n;
	//message = s;
}
