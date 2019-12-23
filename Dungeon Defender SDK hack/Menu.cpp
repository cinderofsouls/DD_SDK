#include "Menu.h"
#include "SdkHeaders.h"
#include <string>


class Menu {
public:
	Menu(std::wstring inName) {
		name->replace(name->begin(), name->end(), inName);
		curNum = Total;
		Menu::Total++;

		x = MenuTextStart.X;
		y = MenuTextStart.Y + (20 * (curNum - 1));
		TotalY = y;

	}
	static int Total;
	static int Selected;
	static bool change;
	static float TotalY;
	int curNum;
	bool bIsOn = false;
	bool bISelected;
	bool bSubMenu;
	std::wstring name[255];
	std::wstring MenuString[255];
	float x, y;

	void Toggle() {
		if (change == true && Selected == curNum) {
			bIsOn = !bIsOn;
			change = false;
		}
	}

	void Display(UCanvas* canvas) {
		setUpString();
		Toggle();

		FColor tempc = canvas->DrawColor;

		canvas->SetPos(x, y);
		if (curNum == Selected && bSubMenu) {
			canvas->SetDrawColor(0, 255, 255, 255);
			canvas->DrawText((wchar_t*)(MenuString->c_str()), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		else if (bIsOn) {
			canvas->SetDrawColor(0, 255, 0, 255);
			canvas->DrawText((wchar_t*)(MenuString->c_str()), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		else {
			canvas->SetDrawColor(255, 0, 0, 255);
			canvas->DrawText((wchar_t*)(MenuString->c_str()), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		canvas->DrawColor = tempc;
	}
	void setUpString() {
		if (bSubMenu) {
			std::wstring temp = std::wstring(L"[") + (name->c_str()) + L"]->";
			MenuString->replace(MenuString->begin(), MenuString->end(), temp.c_str());
		}
		else if (curNum == Selected) {
			std::wstring temp = std::wstring(L"[") + (name->c_str()) + L"]";
			MenuString->replace(MenuString->begin(), MenuString->end(), temp.c_str());
		}

		else {
			MenuString->replace(MenuString->begin(), MenuString->end(), name->c_str());
		}
	}
	void setPos(float i, float t) {
		x = i;
		y = t;
	}


};

class SubMenu {
public:
	SubMenu(std::wstring n, int filter) {
		name->replace(name->begin(), name->end(), n);
		x = subMenuTextStart.X;
		y = subMenuTextStart.Y + (20 * (Total - 1));

		Stat = filter;
		curNum = Total;
		SubMenu::Total++;
		TotalY = y;
	}
	static int Total;
	static int Selected;
	static float TotalY;
	static bool bIncrease;
	static bool bDecrease;
	static bool LockCurrent;
	int curNum;
	int Stat = 0;
	float x, y;
	bool bISelected = false;
	std::wstring name[255];
	std::wstring text[255];

	void Update() {
		if (bIncrease && bISelected) {
			Stat += 10;
			bIncrease = false;
		}
		if (bDecrease && bISelected) {
			Stat -= 10;
			bDecrease = false;
		}
		Lock();
	}
	void Lock() {
		if (LockCurrent && curNum == Selected) {
			bISelected = true;
		}
		else {
			bISelected = false;
		}

	}
	void setupText() {
		std::wstring temp = (name->c_str()) + std::wstring(L" : ") + std::to_wstring(Stat);
		text->replace(text->begin(), text->end(), temp);
	}

	void Render(UCanvas* canvas) {
		setupText();
		Update();
		FColor temp = canvas->DrawColor;


		canvas->SetPos(x, y);
		if (Selected == curNum)
			canvas->DrawColor = fGreen;
		else
			canvas->DrawColor = fRed;
		if (bISelected)
			canvas->DrawColor = fCyan;
		canvas->DrawText((wchar_t*)(text->c_str()), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);

		canvas->DrawColor = temp;
	}
	void setPos(float i, float t) {
		x = i;
		y = t;
	}
};

bool ShowMenu = false;


int Menu::Selected = 1;
int Menu::Total = 1;
bool Menu::change;
float Menu::TotalY;
Menu ESP(std::wstring(L"ESP"));
Menu GodMode(std::wstring(L"GodMode"));
Menu Vaccume(std::wstring(L"Vaccume"));
Menu lastwave(std::wstring(L"lastwave"));
Menu autolevel(std::wstring(L"autolevel"));
Menu InstantKill(std::wstring(L"InstantKill"));
Menu lootshower(std::wstring(L"lootshower"));




int SubMenu::Selected = 1;
int SubMenu::Total = 1;
float SubMenu::TotalY;
bool SubMenu::bIncrease;
bool SubMenu::bDecrease;
bool SubMenu::LockCurrent;
SubMenu HHealth(std::wstring(L"HHealth"), 0);
SubMenu HDamage(std::wstring(L"HDamage"), 0);
SubMenu HSpeed(std::wstring(L"HSpeed"), 0);
SubMenu HCast(std::wstring(L"HCast"), 0);
SubMenu Ability1(std::wstring(L"Ability1"), 0);
SubMenu Ability2(std::wstring(L"Ability2"), 0);
SubMenu THealth(std::wstring(L"THealth"), 250);
SubMenu TDamage(std::wstring(L"TDamage"), 250);
SubMenu TRange(std::wstring(L"TRange"), 0);
SubMenu TCast(std::wstring(L"TCast"), 0);