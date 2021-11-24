#ifndef _CLASS_NODE_
#define _CLASS_NODE_

#include <string>
#include <map>
#include <nlohmann/json.hpp>

class Node
{
public:
	std::string value;
	std::string enemy;
	std::string type;
public:
	friend void from_json(const nlohmann::json& j, Node& v);
};

#endif // _CLASS_NODE_