#include "MainFrame.h"
#include "ReactionGame.h"

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(wxID_ANY, MainFrame::OnStartGame)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    auto* panel = new wxPanel(this);
    auto* sizer = new wxBoxSizer(wxVERTICAL);

    auto* startButton = new wxButton(panel, wxID_ANY, "Start Game");
    auto* settingButton = new wxButton(panel, wxID_ANY, "Settings");
    auto* statsButton = new wxButton(panel, wxID_ANY, "Statistics");
    
    sizer->Add(startButton, 0, wxALL, 10);
    sizer->Add(settingButton, 0, wxALL, 10);
    sizer->Add(statsButton, 0, wxALL, 10);
    
    panel->SetSizer(sizer);
    SetClientSize(400, 300);
}

void MainFrame::OnStartGame(wxCommandEvent& event) {
    auto* gamePanel = new Reaction_Game(this);
    gamePanel->startTest();
}

void MainFrame::OnSettings(wxCommandEvent& event) {
    wxArrayString choices;
    choices.Add("Fullscreen");
    choices.Add("1440x900");
    choices.Add("800x600");

    wxSingleChoiceDialog dialog(this, "Select resolution", "Settings", choices);
    if(dialog.ShowModal() == wxID_OK) {
        
    }
}