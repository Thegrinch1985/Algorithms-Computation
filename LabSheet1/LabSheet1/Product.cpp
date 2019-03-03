#include <string>
#include <iostream>
#include <iomanip>
#include "ProductS.h"
#include <fstream>
#include <ostream>
using namespace std;


Product::Product(double netPriceIn) {
	netPrice = netPriceIn;
}


void Product::setPrice(double D)
{
	netPrice = D;
}

double Product::getGrossPrice() {
	double grossPay = 0;
	grossPay = netPrice + ((netPrice/100 * 21));
	return grossPay;
}

double Product::getNetprice()
{
	return netPrice;
}

bool Product::compare(Product lhs, Product rhs)
{
	return lhs.getGrossPrice() > rhs.getGrossPrice();
}







