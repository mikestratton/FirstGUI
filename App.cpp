#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");
	mainFrame->SetSize(800, 600);
	mainFrame->Center();
	mainFrame->Show(true);
	return true;
}