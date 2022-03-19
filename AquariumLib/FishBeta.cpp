/**
 * @file FishBeta.cpp
 * @author your_name_here
 */

#include "pch.h"
#include "FishBeta.h"
#include "Aquarium.h"
#include "Fish.h"
#include <string>
using namespace std;
/// Fish filename
const wstring FishBetaImageName = L"images/beta.png";
/// Max speed in X direction in pixels per second
const double MaxSpeedX = 300;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 100;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 280;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 80;

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
FishBeta::FishBeta(Aquarium *aquarium) : Fish(aquarium, FishBetaImageName)
{
}
/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* FishBeta::XmlSave(wxXmlNode* node)
{
    auto itemNode = Item::XmlSave(node);

    itemNode->AddAttribute(L"type", L"beta");

    return itemNode;

}
