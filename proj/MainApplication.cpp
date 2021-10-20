#include "MainApplication.h"

wxIMPLEMENT_APP(MainApplication);

MainApplication::MainApplication()
{

}

MainApplication::~MainApplication()
{

}

bool MainApplication::OnInit()
{

	if (!wxApp::OnInit())
		return false;

	MainForm* m_MainForm = new MainForm();
	m_MainForm->Show();

	return true;
}
