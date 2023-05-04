#include <iostream>

#include "Arma.h"
#include "Soldado.h"

using namespace std;

Soldado::Soldado() {
	arma = nullptr;
};

Soldado::~Soldado() {
	//cout << "Eliminando Soldado\n"; 
	//delete arma;
};


void Soldado::TakeWeapon(Arma*& _arma) {
	if (arma != nullptr) {
		cout << "Parece que el soldado ya está equipado con otra arma.\n";
		delete _arma;
	}
	else {
		cout << "Has recogido el arma : ";
		arma = _arma;
		arma->showName();
	}
};


void Soldado::DropWeapon()
{
	if (arma != nullptr)
	{
		cout << "Has dejado el arma : ";
		arma->showName();
		delete arma;
		arma = nullptr;
	}
	else
	{
		cout << "Parece que el soldado no tiene ningún arma en sus manos..\n";
	}
}


void Soldado::Shoot()
{
	if (arma != nullptr)
	{
		arma->Shoot();
	}
	else
	{
		cout << "Parece que el soldado no tiene ningún arma en sus manos..\n";
	}
}


void Soldado::ShowWeapon()
{
	if (arma != nullptr)
	{
		arma->showName();
	}
	else
	{
		cout << "Parece que el soldado no tiene ningún arma en sus manos..\n";
	}
}