#include "JsonHelper.h"

JsonHelper::JsonHelper(std::string fileName) : m_FileName{ fileName }
{
}

JsonHelper::~JsonHelper()
{
}

bool JsonHelper::load(nlohmann::json& result)
{
	StringFileHelper fh(m_FileName);

	try
	{
		result = nlohmann::json::parse(fh.get());
	}
	catch (std::exception const& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return false;
	}

	return true;
}

bool JsonHelper::save()
{
	return false;
}
