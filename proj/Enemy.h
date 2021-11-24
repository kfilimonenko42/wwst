
#ifndef _CLASS_ENEMY_
#define _CLASS_ENEMY_

#include <string>
#include <map>
#include <nlohmann/json.hpp>

class Enemy
{
public:
	std::string value;
	std::string enemy;
	std::string type;

public:
	friend void from_json(const nlohmann::json& j, Enemy& v);
};

#endif // _CLASS_ENEMY_