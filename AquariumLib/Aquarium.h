/**
 * @file Aquarium.h
 * @author Yufan_Ai
 *
 * Class of Aquarium
 */

#ifndef AQUARIUM_AQUARIUM_H
#define AQUARIUM_AQUARIUM_H
#include<memory>
#include "Item.h"
#include <random>

/**
 * The declaration of Aquarium
 */
class Aquarium {
private:
    ///< Background image to use
    std::unique_ptr<wxBitmap> mBackground;

    /// All of the items to populate our aquarium
    std::vector<std::shared_ptr<Item>> mItems;

    ///move to Xml
    void XmlItem(wxXmlNode *node);

public:
    ///draw
    void OnDraw(wxDC* dc);
    Aquarium();
    ///move to
    void Add(std::shared_ptr<Item> item);

    std::shared_ptr<Item> HitTest(int x, int y);
    ///move to front
    void Front(std::shared_ptr<Item> front);
    ///save
    void Save(const wxString &filename);
    ///load
    void Load(const wxString &filename);

    ///clear
    void Clear();

    ///update
    void Update(double elapsed);

    /// Random number generator
    std::mt19937 mRandom;
    /**
 * Get the random number generator
 * @return Pointer to the random number generator
 */
    std::mt19937 &GetRandom() {return mRandom;}
    /**
    * Get the width of the aquarium
    * @return Aquarium width in pixels
    */
    int GetWidth() const { return mBackground->GetWidth(); }

    /**
     * Get the height of the aquarium
     * @return Aquarium height in pixels
     */
    int GetHeight() const { return mBackground->GetHeight(); }
};


#endif //AQUARIUM_AQUARIUM_H
