#ifndef VIEW_H
#define VIEW_H

#include "IView.h"
#include "WeaponFactory.h"
#include <string>

class Presenter;
class Weapon;

class View : public IView
{
private:
	Presenter* m_presenter;
	std::map<WeaponType, Weapon*> m_weaponMenuItems;
	void showMainMenu();
	void runOption(const char* option, bool& exitCondition);
public:
	View();
	~View() override;
	void showMenuToTakeAWeapon();
	void selectWeapon(const char* option, bool& isValidOption);
	void showText(const char* text) override;
	void showText(const std::string& text) override;
	void setWeaponMenuItems(const std::map<WeaponType, Weapon*>& items) override;
};
#endif //VIEW_H
