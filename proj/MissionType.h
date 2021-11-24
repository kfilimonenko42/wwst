
#ifndef _CLASS_MISSION_TYPE_
#define _CLASS_MISSION_TYPE_

#include <string>
#include <map>
#include <nlohmann/json.hpp>

class MissionType
{
public:
	std::string value;

public:
	friend void from_json(const nlohmann::json& j, MissionType& v);
};

#endif // _CLASS_MISSION_TYPE_