#pragma once
#include <wx/wx.h>
#include <vector>

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);
    
    void OnStartGame(wxCommandEvent& event);
    void OnSettings(wxCommandEvent& event);
    void OnStats(wxCommandEvent& event);
    
    void LoadStats();
    void SaveStats();
    
    std::vector<int> reactionTimes;
    
    wxDECLARE_EVENT_TABLE();
};