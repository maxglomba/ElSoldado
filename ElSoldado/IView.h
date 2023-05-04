#pragma once
#include "EWeapons.h"

class IView {
public:
	virtual void takeWeapon(EWeapons) = 0;
	virtual void dropWeapon() = 0;
	virtual void showWeapon() = 0;
	virtual void shootWeapon() = 0;
	virtual void showMenu() = 0;
	virtual void showWeaponsMenu() = 0;
};