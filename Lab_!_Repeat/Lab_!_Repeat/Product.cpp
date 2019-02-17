#include "Product.h"


Product::Product()
{
}

Product::~Product()
{
}

Product::Product(double d)
{
	netPrice = d;
}

double Product::getGrossPrice()
{

	
	double grossPrice = netPrice + ((netPrice/100) * 21);
	return grossPrice;
}

double Product::getNetPrice()
{
	return netPrice;
}
