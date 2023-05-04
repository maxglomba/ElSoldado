#pragma once

#include <iostream>
#include <string.h>

#include "Presenter.h"
#include "Arma.h"
#include "Revolver.h"
#include "Escopeta.h"
#include "Rifle.h"
#include "IView.h"
#include "View.h"
#include "Soldado.h"
#include "EWeapons.h"

Presenter::Presenter(IView* _view) {
	view = _view;
	soldado = new Soldado();
};

Presenter::~Presenter() {
	delete soldado;
};

void Presenter::takeWeapon(EWeapons weapon) {
	Arma* _arma = nullptr;
	switch (weapon)
	{
	case EWeapons::E_Revolver:
		_arma = new Revolver("Revolver");
		soldado->TakeWeapon(_arma);
		break;
	case EWeapons::E_Escopeta:
		_arma = new Escopeta("Escopeta");
		soldado->TakeWeapon(_arma);
		break;
	case EWeapons::E_Rifle:
		_arma = new Rifle("Rifle");
		soldado->TakeWeapon(_arma);
		break;
	default:
		delete _arma;
		break;
	}

};


void Presenter::dropWeapon() {
	soldado->DropWeapon();
};


void Presenter::showWeapon() {
	soldado->ShowWeapon();
};


void Presenter::shootWeapon() {
	soldado->Shoot();
};


void Presenter::showMenu() {
	view->showMenu();
};

void Presenter::showWeaponsMenu() {
	view->showWeaponsMenu();
};