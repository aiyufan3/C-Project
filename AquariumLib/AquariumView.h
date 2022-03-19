/**
 * @file AquariumView.h
 * @author Yufan_Ai
 *
 * The Declaration of AquariumView
 */

#ifndef AQUARIUM_AQUARIUMVIEW_H
#define AQUARIUM_AQUARIUMVIEW_H

#include "Aquarium.h"

/**
* Class of AquariumView
*/
class AquariumView : public wxWindow {
private:
    /// An object that describes our aquarium
    Aquarium  mAquarium;
    wxTimer mTimer;
    /// Stopwatch used to measure elapsed time
    wxStopWatch mStopWatch;

    /// The last stopwatch time
    long mTime = 0;
public:
    void Initialize(wxFrame *parent);
    void OnAddFishBetaFish(wxCommandEvent &event);
    void OnAddFishStarFish(wxCommandEvent &event);
    void OnAddFishMolly(wxCommandEvent &event);


    void OnPaint(wxPaintEvent& event);

    void OnLeftDown(wxMouseEvent &event);

    void OnLeftUp(wxMouseEvent &event);

    void OnMouseMove(wxMouseEvent &event);

    void OnAddDecorCastle(wxCommandEvent &event);

    void OnFileSaveAs(wxCommandEvent &event);

    void OnFileOpen(wxCommandEvent &event);

    void OnTimer(wxTimerEvent &event);
};

#endif //AQUARIUM_AQUARIUMVIEW_H
