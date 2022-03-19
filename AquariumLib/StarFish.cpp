/**
 * @file StarFish.cpp
 * @author Yufan Ai
 */

#include "pch.h"
#include "StarFish.h"
#include "Aquarium.h"
#include <string>
using namespace std;
/// Fish filename
const wstring StarFishImageName = L"images/starfish.png";
/// Max speed in X direction in pixels per second
const double MaxSpeedX = 200;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 200;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 100;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 100;
/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
StarFish::StarFish(Aquarium *aquarium) : Fish(aquarium, StarFishImageName)
{
}
/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* StarFish::XmlSave(wxXmlNode* node)
{
    auto itemNode = Item::XmlSave(node);

    itemNode->AddAttribute(L"type", L"starfish");

    return itemNode;

}

