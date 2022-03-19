/**
 * @file DecorCastle.h
 * @author your_name_here
 *
 *
 */
#include "pch.h"
#include "DecorCastle.h"
#include "Aquarium.h"
#include "Fish.h"
using namespace std;
/// Max speed in X direction in pixels per second
const double MaxSpeedX = 500;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 500;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 500;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 500;
/// Fish filename
const wstring DecorCastleImageName = L"images/castle.png";
/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
DecorCastle::DecorCastle(Aquarium *aquarium) : Fish(aquarium, DecorCastleImageName)
{
}
/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* DecorCastle::XmlSave(wxXmlNode* node)
{
    auto itemNode = Item::XmlSave(node);

    itemNode->AddAttribute(L"type", L"castle");

    return itemNode;

}