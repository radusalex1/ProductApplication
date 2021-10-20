#pragma once
#include <string>
#include <cstdint>
#include <iostream>
#include "CategoryName.h";

class Product
{
	uint16_t Id;
	std::string ProductName;
	float Price;
	CategoryName categoryName;
public:
	Product(uint16_t id, const std::string &productname, float price,uint16_t tva);
	uint16_t getTva() const;
	friend std::ostream& operator<<(std::ostream &f, const Product& product);
	std::string GetName();


};

