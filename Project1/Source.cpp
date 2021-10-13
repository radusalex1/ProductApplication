#include <iostream>
#include <fstream>
#include <vector>
#include <regex>

#include "Product.h"
#include "CategoryName.h"

void stringToCategory(std::string& ExpiringDateOrCategoryName, CategoryName& category)
{

	if (ExpiringDateOrCategoryName == "PersonalHygiene")
	{
		category = CategoryName::PersonalHygiene;
	}
	else
	{
		if (ExpiringDateOrCategoryName == "SmallAppliences")
		{
			category = CategoryName::SmallAppliences;
		}
		else
		{
			category = CategoryName::Clothing;
		}
	}
}

int main()
{
	/*std::ifstream f("product.prodb");*/
	std::vector<Product> products;

	uint16_t Id;
	std::string ProductName;
	float Price;
	uint16_t Tva;
	std::string ExpiringDateOrCategoryName;

	for (std::ifstream f("product.prodb"); !f.eof();/*empty*/)
	{
		f >> Id >> ProductName >> Price >> Tva >> ExpiringDateOrCategoryName;

		std::regex DateRegex(R"(\d\d\d\d-\d\d-\d\d)");

		if (std::regex_match(ExpiringDateOrCategoryName, DateRegex) == true)
		{
			/*Product product(Id, ProductName, Price, Tva, ExpiringDateOrCategoryName);
			products.push_back(product);*/
			products.emplace_back(Id, ProductName, Price, Tva, ExpiringDateOrCategoryName);

		}
		else
		{
			CategoryName category;
			stringToCategory(ExpiringDateOrCategoryName,category);
			//Product product(Id, ProductName, Price, Tva, category); // to do: check for categoryname in enum
			//products.push_back(product);
			products.emplace_back(Id, ProductName, Price, Tva, category);
		}
	}
	for (auto it : products)
	{
		if (it.getTva() == 19)
		{
			std::cout << it;
		}
	}
}