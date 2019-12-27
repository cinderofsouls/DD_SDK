#pragma once
#include "Header.h"
#include <vector>

#define statHHealth 1
#define statHSpeed 2
#define statHDamage  3
#define statHCast 4
#define statAbility1 5
#define statAbility2 6
#define statTHealth 7
#define statTSpeed 8
#define statTDamage 9
#define statTRange 10




class MenuChoice{
public:
	MenuChoice(std::string name);
	std::string Name;
	bool bIsOn;
	int StatToDisplay;
};

