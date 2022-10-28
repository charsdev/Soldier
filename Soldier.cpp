#include "Soldier.h"
#include "Weapon.h"
#include <string>

const std::string NO_WEAPON_MESSAGE = "Parece que el soldado no tiene ningún arma en sus manos...";
const std::string HAS_WEAPON_MESSAGE = "Parece que el soldado ya está equipado con otra arma...";
const std::string DROP_WEAPON_MESSAGE = "El soldado ha soltado el arma que tenía en sus manos...";

bool Soldier::hasWeapon() const 
{
    return m_weapon != nullptr;
}

const char* Soldier::shoot()
{
   return hasWeapon() ? m_weapon->shoot() : NO_WEAPON_MESSAGE.c_str();
}

const char* Soldier::dropCurrentWeapon()
{
    if (hasWeapon())
    {
        m_weapon = nullptr;
        return "El soldado ha soltado el arma que tenía en sus manos...";
    }
    else
    {
        return NO_WEAPON_MESSAGE.c_str();
    }
}

const char* Soldier::seeCurrentWeapon() const
{
    return hasWeapon() ? m_weapon->getName() : NO_WEAPON_MESSAGE.c_str();
}

const char* Soldier::pickupWeapon(int option)
{
    if (hasWeapon())
    {
        return "Parece que el soldado ya está equipado con otra arma...";
    }
    else
    {
        m_weapon = Weapon::pickup(option);
        return "¡El soldado se ha equipado con una nueva arma!";
    }
}
