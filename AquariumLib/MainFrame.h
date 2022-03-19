/**
 * @file MainFrame.h
 * @author Yufan_Ai
 *
 * The main frame of the App
 */

#ifndef AQUARIUM_MAINFRAME_H
#define AQUARIUM_MAINFRAME_H

/**
 * The main frame declaration of the App
 */
class MainFrame : public wxFrame {
private:

public:
    /// initialize function
    void Initialize();
    ///exit function
    void OnExit(wxCommandEvent &event);
    ///welcome function
    void OnWelcome(wxCommandEvent &event);
};

#endif //AQUARIUM_MAINFRAME_H