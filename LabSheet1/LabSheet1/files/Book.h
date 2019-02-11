#pragma once
#ifndef Book_h
#define Book_h
#include <string>
#include "products.h"

using namespace std;

class Book : public Product {
public:
	double getGrossPrice();
	Book(double d);
	//Book();
};

#endif // !Book_h

