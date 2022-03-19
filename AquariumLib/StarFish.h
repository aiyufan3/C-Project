/**
 * @file StarFish.h
 * @author Yufan Ai
 *
 *
 */

#ifndef AQUARIUM_StarFish_H
#define AQUARIUM_StarFish_H

#include "Item.h"
#include "Fish.h"

/**
 * Starfish class
 */
class StarFish : public Fish {
public:
    /// Default constructor (disabled)
    StarFish() = delete;

    /// Copy constructor (disabled)
    StarFish(const StarFish &) = delete;

    /// Assignment operator
    void operator=(const StarFish &) = delete;

    StarFish(Aquarium* aquarium);

    wxXmlNode *XmlSave(wxXmlNode *node);
};
#endif //AQUARIUM_StarFish_H
