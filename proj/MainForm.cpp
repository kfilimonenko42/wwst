#include "MainForm.h"

MainForm::MainForm() : wxFrame(nullptr, wxID_ANY, "Warframe World State Tracker", wxDefaultPosition, wxDefaultSize)
{
	this->Maximize(true);

	Assets::get().LoadEnemies();
	Assets::get().LoadFissureModifiers();
	Assets::get().LoadItems();
	Assets::get().LoadMissionTypes();
	Assets::get().LoadNodes();
}

MainForm::~MainForm()
{

}
