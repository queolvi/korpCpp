#pragma once
#include <wx/wx.h>
#include <chrono>

class Reaction_Game : public wxPanel {
public:
    Reaction_Game(wxWindow* parent);
    
    void endTest() {
        isTesting = false;
        SetBackgroundColour(*wxWHITE);
        Refresh();
    }
    
    void startTest();  // Объявление метода
    
private:
    void onKeyPress(wxKeyEvent& event);
    void onRetry(wxCommandEvent& event);
    
    std::chrono::time_point<std::chrono::system_clock> startTime;
    bool isTesting = false;
    
    wxDECLARE_EVENT_TABLE();
};