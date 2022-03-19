/**
 * @file Item.h
 * @author Yufan_Ai
 *
 * The declaration of items in App
 */

#ifndef AQUARIUM_ITEM_H
#define AQUARIUM_ITEM_H

class Aquarium;

/**
 * Base class for any item in our aquarium.
 */
class Item {
private:

/// The aquarium this item is contained in
    Aquarium   *mAquarium;

    // Item location in the aquarium
    double  mX = 0;     ///< X location for the center of the item
    double  mY = 0;     ///< Y location for the center of the item

protected:
    /// The aquarium this item is contained in
    Item(Aquarium *aquarium);
    /// The underlying fish image
    std::unique_ptr<wxImage> mItemImage;

    /// The bitmap we can display for this fish
    std::unique_ptr<wxBitmap> mItemBitmap;

    /// The underlying fish image
    Item(Aquarium *aquarium, const std::wstring &filename);

public:
    virtual ~Item();

    /// Default constructor (disabled)
    Item() = delete;

    /// Copy constructor (disabled)
    Item(const Item &) = delete;

    /// Assignment operator
    void operator=(const Item &) = delete;



    /**
     * The X location of the item
     * @return X location in pixels
     */
    double GetX() const { return mX; }

    /**
     * The Y location of the item
     * @return Y location in pixels
     */
    double GetY() const { return mY; }

    /**
     * Set the item location
     * @param x X location in pixels
     * @param y Y location in pixels
     */
    void SetLocation(double x, double y) { mX = x; mY = y; }
    /**
 * Set the item speed
 * @param x X location in pixels
 * @param y Y location in pixels
 */
    void SetSpeed(double x, double y) { mX = x; mY = y; }
    /**
 * Draw this item
 * @param dc Device context to draw on
 */
    virtual void Draw(wxDC *dc);
    /**
 * Test this item to see if it has been clicked on
 * @param x X location on the aquarium to test in pixels
 * @param y Y location on the aquarium to test in pixels
 * @return true if clicked on
 */
    virtual bool HitTest(int x, int y);

    virtual wxXmlNode *XmlSave(wxXmlNode *node);

    virtual void XmlLoad(wxXmlNode *node);
    /**
 * Handle updates for animation
 * @param elapsed The time since the last update
 */
    virtual void Update(double elapsed) {}
    /**
 * Get the pointer to the Aquarium object
 * @return Pointer to Aquarium object
 */
    Aquarium *GetAquarium() { return mAquarium;  }

    /// set mirror
    void SetMirror(bool m);
};

#endif //AQUARIUM_ITEM_H
