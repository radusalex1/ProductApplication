#pragma once
#include <string>
#include <cstdint>
#include "CategoryName.h";

class Product
{
	uint16_t Id;
	std::string ProductName;
	float Price;
	uint16_t Tva;
	std::string ExpiringDate;
	CategoryName categoryName;
public:
	Product(uint16_t id, const std::string &productname, float price,uint16_t tva, const std::string &expiringdate);
	Product(uint16_t id, const std::string &productname, float price,uint16_t tva, CategoryName categoryname);


};

