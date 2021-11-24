#include "MissionType.h"

void from_json(const nlohmann::json& j, MissionType& v)
{
	j.at("value").get_to(v.value);
}