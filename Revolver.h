#ifndef REVOLVER_H
#define REVOLVER_H

#include "Weapon.h"

class Revolver : public Weapon
{
public:
	Revolver();
	const char* shoot() override;
};
#endif //REVOLVER_H
