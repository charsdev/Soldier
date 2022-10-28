#include "WeaponFactory.h"
#include "Weapon.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Shotgun.h"
#include <algorithm>

WeaponFactory::WeaponFactory() = default;

Weapon* WeaponFactory::GetWeapon(WeaponType weaponSelected)
{
	auto weapons = getWeaponList();
	if (weapons.count(weaponSelected) == 0) {
		return nullptr;
	}
	auto item = weapons[weaponSelected];
	return item;
}

std::map<WeaponType, Weapon*> WeaponFactory::getWeaponList()
{
	auto revolver = new Revolver();
	auto rifle = new Rifle();
	auto shotgun = new Shotgun();

	return std::map<WeaponType, Weapon*> {
		{ WeaponType::Revolver, revolver},
		{ WeaponType::Rifle,    rifle },
		{ WeaponType::Shotgun,  shotgun },
	};
}
