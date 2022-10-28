#ifndef SHOTGUN_H
#define SHOTGUN_H

#include "Weapon.h"

class Shotgun : public Weapon
{
public:
    Shotgun();
    const char* shoot() override;
};

#endif //SHOTGUN_H
