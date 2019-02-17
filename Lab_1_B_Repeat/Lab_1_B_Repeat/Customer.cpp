#include "Person.h"
#include "Customer.h"
#include "iostream"

using namespace std;

Customer::Customer(string s, string m)
	:Person(s), message(m)
{
}

void Customer::printname()
{
	cout << "Name : " << name << "Message : " << getMessage();
}

string Customer::getMessage()
{
	return message;
}
