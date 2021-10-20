#include <iostream>
#include "PerishableProduct.h"

PerishableProduct::PerishableProduct(
	uint16_t id, 
	const std::string& productname, 
	float price, 
	uint16_t tva):Product(id, productname, price, tva), m_expirationDate{m_expirationDate}
{

}

