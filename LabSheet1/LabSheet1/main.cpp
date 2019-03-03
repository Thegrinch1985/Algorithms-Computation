#include "Products.h"
#include "Book.h"
#include "Software.h"
#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <algorithm> 
#include <list>
#include <functional>
using namespace std;


bool sortingMechanism(Product *i, Product *j)
{
	return  i->getGrossPrice() < j->getGrossPrice();
}
int main()
{
	const int INT_SIZE = 4;

	vector<Product *>array_of_products(8);
	vector<Product>::iterator vit;


	//Product p1 = new Product();
	char answer;
	double price;
	cout << "Please enter the Net Price for the Book " << endl;
	cin >> price;
	Book *b1 = new Book(price);
	//b1->setPrice(price);

	cout << "Please enter the Net Price for the Software " << endl;
	cin >> price;
	Software *s1 = new Software(price);
	//s1->setPrice(price);
//array_of_products.insert(b1);
	array_of_products.push_back(b1);
	array_of_products.push_back(s1);
	cout << "The price of the Book is " << b1->getGrossPrice() << endl;
	cout << "The price of the Software is " << s1->getGrossPrice() << endl;
	//cout << array_of_products.empty();
	for (int i = 0; i < array_of_products.size(); i++)
	{
		cout << "\nDo you wish to enter a Software or Book" << endl;
		cout << "S for Software , B for Book" << endl;
		cin >> answer;
		if (answer == 'S' || answer == 's')
		{

			cout << "What is the Price ? " << endl;
			cin >> price;
			array_of_products[i] = new Software(price);
			//array_of_products.push_back(array_of_products[i]);
			//cout << array_of_products[i]->getGrossPrice();

		}
		else if (answer == 'b' || answer == 'B')
		{
			//array_of_products[i] = new Book();
			cout << "What is the Price ? " << endl;
			cin >> price;
			array_of_products[i] = new Book(price);
			//array_of_products[i]->setPrice(price);
			//array_of_products.push_back(array_of_products[i]);
			//cout << array_of_products[i]->getGrossPrice();
		}
		else {

			cout << "Incorect Entry";
		}
	}
	cout << "\nPrice List" << endl;
	for (int i = 0; i < array_of_products.size(); i++)
	{
		cout << " Product Number " << (i + 1) << ": € " << array_of_products[i]->getGrossPrice() << endl;
	}
	cout << "\nSorted Price List" << endl;
	//sort(array_of_products.begin(), array_of_products.end(),sortingMechanism);
	sort(begin(array_of_products), end(array_of_products), sortingMechanism);
	for (int i = 0; i < array_of_products.size(); i++)
	{
		
		cout << " Product Number " << (i + 1) << ": € " << array_of_products[i]->getGrossPrice() << endl;

	}


	system("pause");
}