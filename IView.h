#ifndef IVIEW_H
#define IVIEW_H
#include <map>
#include <string>

class Weapon;
enum class WeaponType;

class IView 
{
public:
	virtual ~IView() = default;
	virtual void showText(const char* text) = 0;
	virtual void showText(const std::string& text) = 0;
	virtual void setWeaponMenuItems(const std::map<WeaponType, Weapon*>& items) = 0;
};
#endif // IVIEW_H
