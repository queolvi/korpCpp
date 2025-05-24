#include "ReactionGame.h"
#include <random>

wxBEGIN_EVENT_TABLE(Reaction_Game, wxPanel)
    EVT_CHAR_HOOK(Reaction_Game::onKeyPress)
    EVT_BUTTON(wxID_ANY, Reaction_Game::onRetry)
wxEND_EVENT_TABLE()


Reaction_Game::Reaction_Game(wxWindow* parent) : wxPanel(parent) {
    SetBackgroundColour(*wxWHITE);
    auto* retryButton = new wxButton(this, wxID_ANY, "Retry", wxPoint(10,10));
    retryButton->Bind(wxEVT_BUTTON, &Reaction_Game::onRetry, this);
}


void Reaction_Game::startTest() {
    SetBackgroundColour(*wxWHITE);
    Refresh();

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1000, 4000);
    wxMilliSleep(dist(gen));

    startTime = std::chrono::system_clock::now();
    SetBackgroundColour(*wxGREEN);
    isTesting = true;
    Refresh();
}
void Reaction_Game::onKeyPress(wxKeyEvent &event) {}
void Reaction_Game::onRetry(wxCommandEvent &event) {}


// Остальные методы...