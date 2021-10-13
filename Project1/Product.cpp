#include "Product.h"

Product::Product(uint16_t id, const std::string& productname, float price, uint16_t tva, const std::string& expiringdate)
	:Id{ id }, ProductName{ productname }, Price{ price }, Tva{ tva }, ExpiringDate{ expiringdate }
{
	
}

Product::Product(uint16_t id, const std::string& productname, float price, uint16_t tva, CategoryName categoryname)
	:Id{ id }, ProductName{ productname }, Price{ price }, Tva{ tva }, categoryName{ categoryname }
{

}
