
#ifndef _CLASS_JSON_HELPER_
#define _CLASS_JSON_HELPER_

#include <string>
#include <nlohmann/json.hpp>

#include "StringFileHelper.h"

class JsonHelper
{
public:
	JsonHelper(std::string fileName);
	~JsonHelper();

	bool load(nlohmann::json& result);
	bool save();

private:
	std::string m_FileName;
};

#endif // _CLASS_JSON_HELPER_