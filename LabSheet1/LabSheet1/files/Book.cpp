#include "Book.h"
#include "Products.h"
#include <iostream>
#include <iomanip>



double Book::getGrossPrice() 
{
	return getNetprice();
}

Book::Book(double d)
	:Product(d)
{
	//netPrice = d;
}


