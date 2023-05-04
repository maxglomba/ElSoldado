#pragma once

#include <iostream>
#include <string.h>
#include "IView.h"

#include "Arma.h"
#include "Revolver.h"
#include "Escopeta.h"
#include "Rifle.h"
#include "IView.h"
#include "View.h"
#include "Soldado.h"
#include "Presenter.h"
#include "EWeapons.h"

View::View() {
	input = '0';
	presenter = new Presenter(this);
	presenter->showMenu();
};

View::~View() {
	delete presenter;
};

void View::takeWeapon(EWeapons weapon) {
	presenter->takeWeapon(weapon);
};

void View::dropWeapon() {
	presenter->dropWeapon();
};

void View::showWeapon() {
	presenter->showWeapon();
};

void View::shootWeapon() {
	presenter->shootWeapon();
};

void View::showMenu() {
	do
	{
		system("cls");
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-\n\n";
		cout << "¿Qué desea hacer?\n";
		cout << "(presione el numero correspondiente a la opción del menú\n\n";
		cout << "1- Recoger arma\n";
		cout << "2- Dejar arma\n";
		cout << "3- Disparar\n";
		cout << "4- Ver arma en uso\n";
		cout << "X- Salir\n";
		cin >> input;
		switch (input)
		{
		case '1':
			presenter->showWeaponsMenu();
			input = '0';
			break;
		case '2':
			presenter->dropWeapon();
			system("pause");
			break;
		case '3':
			presenter->shootWeapon();
			system("pause");
			break;
		case '4':
			presenter->showWeapon();
			system("pause");
			break;
		default:
			break;
		}

	} while (input != 'x' && input != 'X');
};

void View::showWeaponsMenu() {
	do
	{
		system("cls");
		cout << "Por favor, escoja el arma que desea utilizar:\n\n";
		cout << "1- Revolver\n";
		cout << "2- Rifle\n";
		cout << "3- Escopeta\n";
		cout << "X- Volver atrás\n";
		cin >> input;
		switch (input)
		{
		case '1':
			presenter->takeWeapon(EWeapons::E_Revolver);
			system("pause");
			break;
		case '2':
			presenter->takeWeapon(EWeapons::E_Rifle);
			system("pause");
			break;
		case '3':
			presenter->takeWeapon(EWeapons::E_Escopeta);
			system("pause");
			break;
		default:
			break;
		}

	} while (input != 'x' && input != 'X');
};