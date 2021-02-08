//
//  Item.cpp
//  Item
//
//  Created by Pau Adrian Catalin on 07/12/2020.
//

#include "Item.h"

Item::Item(std::string itemName)
{
	ItemName = itemName;
}

Item::~Item()
{

}

std::string Item::GetItemName()
{
	return ItemName;
}
