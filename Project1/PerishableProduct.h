#pragma once
#include "Product.h"

class PerishableProduct : public Product
{
private:
	std::string m_expirationDate;
public:
	PerishableProduct(uint16_t id, const std::string& productname, float price, uint16_t tva);
	static const uint16_t tva=9;

};
