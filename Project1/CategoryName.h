#pragma once
#include <cstdint>
#include <string>
#include <iostream>
enum class CategoryName : uint8_t
{
	PersonalHygiene, SmallAppliences, Clothing

};
std::string ToString(CategoryName category);