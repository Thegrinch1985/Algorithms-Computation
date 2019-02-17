#pragma once
#ifndef product_h
#define product_h

class Product
{
public:
	Product();
	~Product();
	Product(double);
	double getGrossPrice();
	double getNetPrice();

protected:
	double netPrice;
	const double VAT = 21;
};


#endif // !product.h
