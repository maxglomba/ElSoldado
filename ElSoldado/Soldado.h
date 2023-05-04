#pragma once

class Soldado {
	Arma* arma = nullptr;
public:
	Soldado();
	~Soldado();
	void TakeWeapon(Arma*& _arma);
	void DropWeapon();
	void Shoot();
	void ShowWeapon();

};
