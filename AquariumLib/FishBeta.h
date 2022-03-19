/**
 * @file FishBeta.h
 * @author your_name_here
 *
 *
 */

#ifndef AQUARIUM_FISHBETA_H
#define AQUARIUM_FISHBETA_H

#include "Item.h"
#include "Fish.h"

/**
 * Fish Beta class
 */
class FishBeta : public Fish {
public:
    /// Default constructor (disabled)
    FishBeta() = delete;

    /// Copy constructor (disabled)
    FishBeta(const FishBeta &) = delete;

    /// Assignment operator
    void operator=(const FishBeta &) = delete;

    FishBeta(Aquarium* aquarium);

    wxXmlNode *XmlSave(wxXmlNode *node) override;
};

#endif //AQUARIUM_FISHBETA_H
