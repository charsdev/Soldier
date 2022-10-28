#include "Presenter.h"
#include "IView.h"
#include "Soldier.h"
#include "Weapon.h"

Presenter::Presenter(IView* view) : m_view(view), m_soldier(new Soldier())
{
}

Presenter::~Presenter()
{
	delete m_soldier;
};

void Presenter::shoot()
{
	const char* behaviour = m_soldier->shoot();
	m_view->showText(behaviour);
}

void Presenter::seeCurrentWeapon()
{
	const char* behaviour = m_soldier->seeCurrentWeapon();
	m_view->showText(behaviour);
}

void Presenter::dropCurrentWeapon()
{
	const char* behaviour = m_soldier->dropCurrentWeapon();
	m_view->showText(behaviour);
}

void Presenter::pickupWeapon(int option)
{
	std::system("cls");
	const char* behaviour = m_soldier->pickupWeapon(option);
	m_view->showText(behaviour);
}

void Presenter::getListOfWeaponMenuItems()
{
	auto listOfClassConstants = Weapon::getConstants();
	m_view->setWeaponMenuItems(listOfClassConstants); // seteamos en la vista los ítems de menú
}
