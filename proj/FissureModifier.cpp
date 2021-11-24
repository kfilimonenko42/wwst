#include "FissureModifier.h"

void from_json(const nlohmann::json& j, FissureModifier& v)
{
	j.at("value").get_to(v.value);

	if (j.contains("num"))
		j.at("num").get_to(v.number);
}