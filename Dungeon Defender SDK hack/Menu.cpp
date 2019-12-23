#include "Menu.h"

MenuChoice::MenuChoice(std::wstring name, bool isOn) {
	Name.replace(Name.begin(), Name.end(), name);
	bIsOn = isOn;
}

void MenuChoice::Inc(float IncBy) {
	StatToDisplay += IncBy;
}
void MenuChoice::Dec(float IncBy) {
	StatToDisplay -= IncBy;
}











Menu::Menu(Pos pos) {
	Position = pos;
}
void Menu::Toggle() {
	Items[cSelected]->bIsOn = !Items[cSelected]->bIsOn;
}
bool Menu::CalcBoxMaxY() {
	if (LastItemCount != Items.size()) {
		LastItemCount = Items.size();
		TotalY = Items.size() * 20;
		TotalY = TotalY + 5;
		return true;
	}
	return false;
}
void Menu::SetPos(float x, float y) {
	Position.x = x;
	Position.y = y;
}
void Menu::AddItem(MenuChoice* Item) {
	Item->num = Items.size();
	Item->Position = Position;
	Item->Position.y = Item->Position.y + (20 * Item->num);
	Items.push_back(Item);

	

}
bool Menu::Up() {
	if (bIsActive && cSelected > 0) {
		Items[cSelected]->bIsSelected = false;
		cSelected -= 1;
		Items[cSelected]->bIsSelected = true;
		return true;
	}
	return false;
}
bool Menu::Down() {
	if (bIsActive && cSelected < Items.size()-1) {
		Items[cSelected]->bIsSelected = false;
		cSelected += 1;
		Items[cSelected]->bIsSelected = true;
		return true;
	}
	return false;
}


void Menu::IncMenuChoice(float IncBy) {
	Items[cSelected]->Inc(IncBy);
}
void Menu::DecMenuChoice(float IncBy) {
	Items[cSelected]->Dec(IncBy);
}
bool Menu::AllOff() {
	for (int i = 0; i < Items.size(); i++) {
		if (Items[i])
			Items[i]->bIsOn = false;
		else
			return false;
	}
	return true;
}