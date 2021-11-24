#include "StringFileHelper.h"

StringFileHelper::StringFileHelper(const std::string fileName) : std::ifstream(fileName)
{
	if (is_open())
	{
		seekg(0, std::ios::end);
		m_sFileData.reserve(tellg());
		seekg(0, std::ios::beg);
		m_sFileData.assign(std::istreambuf_iterator<char>(*this), std::istreambuf_iterator<char>());
	}
}

StringFileHelper::~StringFileHelper()
{
}

std::string StringFileHelper::get()
{
	return m_sFileData;
}

