/**
 * @file Molly.h
 * @author Yufan Ai
 */

#ifndef AQUARIUM_MOLLY_H
#define AQUARIUM_MOLLY_H
#include "Item.h"
#include "Fish.h"

/**
 * Molly class
 */
class Molly : public Fish {
public:
    /// Default constructor (disabled)
    Molly() = delete;

    /// Copy constructor (disabled)
    Molly(const Molly &) = delete;

    /// Assignment operator
    void operator=(const Molly &) = delete;

    Molly(Aquarium* aquarium);

    wxXmlNode *XmlSave(wxXmlNode *node);
};


#endif //AQUARIUM_MOLLY_H
