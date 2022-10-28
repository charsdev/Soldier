#ifndef RIFLE_H
#define RIFLE_H

#include "Weapon.h"

class Rifle : public Weapon
{
public:
	Rifle();

	// Inherited via Weapon
	const char* shoot() override;
};
#endif //RIFLE_H