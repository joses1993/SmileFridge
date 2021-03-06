/******************************************************************************
** Program name: SmileFridge.cpp
** Authors: Jason Moule & Tommy Armstrong
** CS361-400-W20
** Date: 1/30/20
** Description: Spike driver for data investigation
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <iomanip>
#include <fstream>
#include <sstream>

#include "User.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "climateControl.h"

// Prototypes

// Main
int main()
{
    cout << endl << "Welcome to your SmileFridge!!!" << endl << endl;

    User *user = new User("Joe Blow", "joe@blow.com", "AFE87WE34FES");
    Inventory *inventory = new Inventory();
    vector<Item*> contents = inventory->GetContents();
	vector<Item*> favorites = inventory->GetFavorites();

    cout << "Printing fridge contents:" << endl << endl;

    for (Item* item : contents)
    {
        cout << item->GetDisplayName() << "| " << item->GetFullName() << "| " << item->GetSku() << "| ";
        cout << item->GetDate() << "| " << item->GetQuantity() << "| " << item->GetOrderPoint();
        if (item->IsFavorite()) cout << "| Favorite";
        cout << endl;
    }

	cout << endl << "Printing fridge favorites:" << endl << endl;

	for (Item* item : favorites)
	{
		cout << item->GetDisplayName() << "| " << item->GetFullName() << "| " << item->GetSku() << "| ";
		cout << item->GetDate() << "| " << item->GetQuantity() << "| " << item->GetOrderPoint() << endl;
	}

    climateControl cC;
    cC.climateMenu();
	
    return 0;
} //End Main

