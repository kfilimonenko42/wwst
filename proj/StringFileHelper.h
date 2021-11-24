
#ifndef _CLASS_STRING_FILE_HELPER_
#define _CLASS_STRING_FILE_HELPER_

#include <fstream>
#include <iostream>
#include <iomanip>

class StringFileHelper : std::ifstream
{
public:
	StringFileHelper(const std::string fileName);
	~StringFileHelper();

	std::string get();

	StringFileHelper(const StringFileHelper&) = delete;
	StringFileHelper& operator=(const StringFileHelper&) = delete;
	StringFileHelper(StringFileHelper&&) = delete;
	StringFileHelper& operator=(StringFileHelper&&) = delete;

private:
	std::string m_sFileData;
};

#endif // _CLASS_STRING_FILE_HELPER_