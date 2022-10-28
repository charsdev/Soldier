#ifndef WEAPON_H
#define WEAPON_H

#include <map>
#include "WeaponFactory.h"

class Weapon
{
	friend class Shotgun;
	friend class Rifle;
	friend class Revolver;

public:
	virtual const char* shoot() = 0;
	virtual ~Weapon() = default;
	static Weapon* pickup(int weaponSelected);
	static std::map<WeaponType, Weapon*> getConstants();
	const char* getName() const;
private:
	const char* m_name;
};
#endif //WEAPON_H