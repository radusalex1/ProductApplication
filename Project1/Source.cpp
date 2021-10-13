#include <iostream>
#include <fstream>
#include <vector>
#include <regex>

#include "Product.h"
#include "CategoryName.h"

int main()
{
	/*std::ifstream f("product.prodb");*/
	std::vector<Product> products;

	uint16_t Id;
	std::string ProductName;
	float Price;
	uint16_t Tva;
	std::string ExpiringDateOrCategoryName;

	/*while (!f.eof())
	{
		f >> Id >> ProductName >> Price >> Tva >> ExpiringDateOrCategoryName;

	}*/
	///  \d\d\d\d-\d\d-\d\d
	for (std::ifstream f("product.prodb"); !f.eof();/*empty*/)
	{
		f >> Id >> ProductName >> Price >> Tva >> ExpiringDateOrCategoryName;

		std::regex DateRegex(R"(\d\d\d\d-\d\d-\d\d)");

		if (std::regex_match(ExpiringDateOrCategoryName, DateRegex) == true)
		{
			Product product(Id, ProductName, Price, Tva, ExpiringDateOrCategoryName);
			products.push_back(product);
		}
		else
		{
			Product product(Id, ProductName, Price, Tva, ExpiringDateOrCategoryName); // to do: check for categoryname in enum
			products.push_back(product);
		}
	}
}