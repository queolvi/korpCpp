#include "App.h"
#include "MainFrame.h" 
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit(){
    auto* mainWindow_ = new MainFrame("Reaction Game");
    mainWindow_->Show(true);
    return true;
}