#include "Enemy.h"

void from_json(const nlohmann::json& j, Enemy& v)
{
	j.at("value").get_to(v.value);
}