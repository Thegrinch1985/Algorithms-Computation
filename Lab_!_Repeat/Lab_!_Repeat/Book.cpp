#include "Book.h"

double Book::getGrossPrice()
{
	return getNetPrice();;
}

Book::Book(double d)
	:Product(d)
{
	//netPrice = d;
}
