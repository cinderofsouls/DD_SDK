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



struct Pos {
	float x = 0;
	float y = 0;
};
class MenuChoice {
public:
	std::wstring Name;
	bool bIsOn;
	bool bIsSelected;
	Pos Position;
	
	int num;
	int StatToDisplay;
	bool bDisplayANum;
	bool bChangeDisplayNum = true;
	MenuChoice(std::wstring name, bool isOn);

	void Inc(float IncBy);
	void Dec(float IncBy);
};


class Menu {
public:
	Menu(Pos pos);


	int cSelected;

	bool bIsActive;
	bool bLockCurrentSelection;
	int LastItemCount;
	std::vector < MenuChoice* > Items;


	Pos Position;
	float TotalY;


	void Toggle();

	bool CalcBoxMaxY();

	void SetPos(float x, float y);

	void AddItem(MenuChoice* Item);
	bool Up();
	bool Down();
	bool AllOff();
	void IncMenuChoice(float IncBy);
	void DecMenuChoice(float IncBy);

};















