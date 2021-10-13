#include "Product.h"
#include "CategoryName.h"
#include <iostream>
Product::Product(uint16_t id, const std::string& productname, float price, uint16_t tva, const std::string& expiringdate)
	:Id{ id }, ProductName{ productname }, Price{ price }, Tva{ tva }, ExpiringDate{ expiringdate }
{
	
}

Product::Product(uint16_t id, const std::string& productname, float price, uint16_t tva, CategoryName categoryname)
	:Id{ id }, ProductName{ productname }, Price{ price }, Tva{ tva }, categoryName{ categoryname }
{

}

uint16_t Product::getTva() const
{
	return this->Tva;
}

std::ostream& operator<<(std::ostream& f, const Product& product)
{
	f << product.Id << " " << product.ProductName << " " << product.Price << " " << product.Tva << " ";
	if (product.Tva == 9)
	{
		f << product.ExpiringDate;
	}
	else
	{
		f <<ToString(product.categoryName);
	}
	f << std::endl;
	return f;
}
