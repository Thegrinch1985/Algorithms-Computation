#include "Book.h";
#include "Product.h"
#include "Software.h"
#include <iostream>
#include <string>
#include<vector>
#include <ostream>
#include <algorithm> 
#include <list>
#include <functional>
using namespace std;
int main() {

	const int SIZE = 4;
	vector<Product *>array_of_products(SIZE);
	Book *pointerBook;
	Software *pointerSoftware;

	double price;
	cout << "enter price for book " << endl;
	cin >> price;
	Book b1 = Book(price);
	cout << "enter price for Software " << endl;
	cin >> price;
	Software s1 = Software(price);
	char Y, y, N, n;
	char result;

	pointerBook = &b1;
	pointerSoftware = &s1;
	array_of_products.push_back(pointerBook);
	array_of_products.push_back(pointerSoftware);
	for (int i = 0; i < array_of_products.size(); i++) {
		cout << "What Product do you wish to Enter" << endl;
		cout << "B for Book or S for Software" << endl;
		cin >> result;
		if (result == 'B' || result == 'b')
		{
			cout << "Enter the Price of Book ";
			cin >> price;
			array_of_products[i] = new Book(price);

		}
		else if (result == 'S' || result == 's')
		{
			cout << "Enter the Price of Software " << endl;
			cin >> price;
			array_of_products[i] = new Software(price);
		}
		else
		{
			cout << "Incorrect Entry" << endl;

		}
	}
	for (int i = 0; i < array_of_products.size(); i++)
	{
		cout << "Product " << (i+1) << ": " << array_of_products[i]->getGrossPrice() << endl;
	}
	cout << "Book Price " << b1.getGrossPrice() << endl;
	cout << "Software Price " << s1.getGrossPrice() << endl;
	for (int i = 0; i < array_of_products.size(); i++)
	{
		sort(array_of_products.begin(), array_of_products.end() );

	}
	
	for (int i = 0; i < array_of_products.size(); i++)
	{
		cout << "Product " << (i + 1) << ": " << array_of_products[i]->getGrossPrice() << endl;
	}
	system("pause");

}