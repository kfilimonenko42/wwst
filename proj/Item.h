
#ifndef _CLASS_ITEM_
#define _CLASS_ITEM_

#include <string>
#include <map>
#include <nlohmann/json.hpp>

class Item
{
public:
	std::string value;
	std::string imageName;

public:
	friend void from_json(const nlohmann::json& j, Item& v);
};

#endif // _CLASS_ITEM_