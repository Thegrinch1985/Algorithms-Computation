#pragma once
#ifndef product_h
#define product_h
#include <string>
#include <iomanip>
#include <iostream>
#include <ostream>
class Product

{
public:

	//double netPrice;

	//Product(string);
	Product(double);

	//friend ostream& operator<<(ostream& out, const Product& p);

	void setPrice(double d);
	double getGrossPrice();
	double getNetprice();
	bool compare(Product lhs, Product rhs);

	bool operator>(Product * lhs);

protected:
	double netPrice;

};
#endif // !product_h
