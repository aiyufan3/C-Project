/**
 * @file Molly.cpp
 * @author Yufan Ai
 */

#include "pch.h"
#include "Molly.h"
#include "Aquarium.h"
#include <string>
using namespace std;
/// Fish filename
const wstring MollyImageName = L"images/molly.png";
/// Max speed in X direction in pixels per second
const double MaxSpeedX = 150;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 150;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 40;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 40;
/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
Molly::Molly(Aquarium *aquarium) : Fish(aquarium, MollyImageName)
{
}
/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* Molly::XmlSave(wxXmlNode* node)
{
    auto itemNode = Item::XmlSave(node);

    itemNode->AddAttribute(L"type", L"molly");

    return itemNode;

}
