#include"Moja_Apka.h"
#include"Frame.h"

wxIMPLEMENT_APP(Moja_Apka);

MyFrame::MyFrame()
    : wxFrame(NULL, wxID_ANY, "FitNotLess", wxPoint(50, 50), wxSize(800, 600))
{
    //creates a menu bar
    wxMenu *fileMenu = new wxMenu;

    wxMenu *HelpMenu = new wxMenu;
    HelpMenu->Append(Minimal_About, "&About", "Show about menu!");

    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, "&Menu");
    menuBar->Append(HelpMenu, "&Help");

    SetMenuBar(menuBar);


    // SetSizerAndFit(sizer);

    // wxMenu *menuFile = new wxMenu;
    // menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
    //                  "Help string shown in status bar for this menu item");
    // menuFile->AppendSeparator();
    // menuFile->Append(wxID_EXIT);
    // wxMenu *menuHelp = new wxMenu;
    // menuHelp->Append(wxID_ABOUT);
    // wxMenuBar *menuBar = new wxMenuBar;
    // menuBar->Append(menuFile, "&File");
    // menuBar->Append(menuHelp, "&Help");
    // SetMenuBar( menuBar );
    // CreateStatusBar();
    // SetStatusText("Welcome to wxWidgets!");
    // Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    // Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    // Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}
