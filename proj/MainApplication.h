
#ifndef _MAIN_APPLICATION_
#define _MAIN_APPLICATION_

#include "Header.h"
#include "MainForm.h"

class MainApplication : public wxApp
{
public:
	MainApplication();
	~MainApplication();

	virtual bool OnInit();
};

#endif // _MAIN_APPLICATION_
