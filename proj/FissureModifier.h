
#ifndef _CLASS_FISSURE_MODIFIER_
#define _CLASS_FISSURE_MODIFIER_

#include <string>
#include <map>
#include <nlohmann/json.hpp>

class FissureModifier
{
public:
	std::string value;
	int number;

public:
	friend void from_json(const nlohmann::json& j, FissureModifier& v);
};

#endif // _CLASS_FISSURE_MODIFIER_