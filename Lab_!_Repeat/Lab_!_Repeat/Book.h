#pragma once
#ifndef book_h
#define book_h
#include "Product.h"
class Book : public Product
{
public:
	double getGrossPrice();
	Book(double d);
private:

};


#endif // !book.h
