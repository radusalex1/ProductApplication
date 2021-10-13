#include "CategoryName.h"
#include <iostream>
std::string ToString(CategoryName category)
{
	switch (category)
	{
	case CategoryName::PersonalHygiene:
		return "PersonalHygiene";
		break;
	case CategoryName::SmallAppliences:
		return "SmallAppliences";
		break;
	case CategoryName::Clothing:
		return "Clothing";
		break;
	default:
		break;
	}
}
