#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class MyFrame : public wxFrame
{
public:
    MyFrame();
private:
    // void OnHello(wxCommandEvent& event);
    // void OnExit(wxCommandEvent& event);
    // void OnAbout(wxCommandEvent& event);
};

enum
{
    Minimal_Quit = wxID_EXIT,

    Minimal_About = wxID_ABOUT
};