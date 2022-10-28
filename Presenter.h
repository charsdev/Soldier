#ifndef PRESENTER_H
#define PRESENTER_H

class IView;
class Soldier;

class Presenter
{
private:
	IView* m_view = nullptr;
	Soldier* m_soldier = nullptr;
public:
	explicit Presenter(IView* view);
	~Presenter();
	void pickupWeapon(int option);
	void getListOfWeaponMenuItems();
	void shoot();
	void seeCurrentWeapon();
	void dropCurrentWeapon();
};
#endif //PRESENTER_H
