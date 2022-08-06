/*
*******************************************************
PROGRAM NAME - AdventureGame

PROGRAMMERS - Logan Durham
              Stephanie Livengood
              Oussama Aireche
              Anson Allseitz

DESCRIPTION - This is text based adventure game in which players will choose a
character to play as, they will also have certain attacks they can use. If the
player has 0 health at any point they lose. If they go through all of the
encounters with health points above 0 they win.

DATE - Started 07 / 05 / 2022
DATE - Last Update  07 / 24 / 2022
* ******************************************************
*/

// Class for the players inventory
#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"
#include <string>
#include <vector>

using namespace std;

class inventory {
private:
  int maxNumItems = 10;
  vector<item> itemList;

public:
  inventory();
  int getNumItems();
  int getMaxNumItems();
  void removeItem(int itemNum);
  void addItem(item theItem);
  item getItem(int itemNum);
};

#endif