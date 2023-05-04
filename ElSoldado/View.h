#pragma once

#include "IView.h"
#include "EWeapons.h"

class Presenter;

class View : public IView
{
	Presenter * presenter = nullptr;
	char input;

public:
	View();
	~View();
	void takeWeapon(EWeapons weapon) override;
	void dropWeapon() override;
	void showWeapon() override;
	void shootWeapon() override;
	void showMenu() override;
	void showWeaponsMenu() override;

};