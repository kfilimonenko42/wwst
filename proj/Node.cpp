#include "Node.h"

void from_json(const nlohmann::json& j, Node& v)
{
    j.at("value").get_to(v.value);

    if (j.contains("enemy"))
        j.at("enemy").get_to(v.enemy);

    if (j.contains("type"))
        j.at("type").get_to(v.type);
}