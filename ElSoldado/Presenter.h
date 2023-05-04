#pragma once

#include "IView.h"
#include "EWeapons.h"
class Soldado;

using namespace std;

class Presenter : public IView
{
	IView * view = nullptr;
	Soldado* soldado = nullptr;

public:
	Presenter(IView *_view);
	~Presenter() ;
	void takeWeapon(EWeapons weapon) override;
	void dropWeapon() override;
	void showWeapon() override;
	void shootWeapon() override;
	void showMenu() override;
	void showWeaponsMenu() override;

};