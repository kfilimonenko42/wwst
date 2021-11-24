#include "Item.h"

void from_json(const nlohmann::json& j, Item& v)
{
    j.at("value").get_to(v.value);

    if (j.contains("imageName"))
        j.at("imageName").get_to(v.imageName);
}