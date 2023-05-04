
#include <iostream>
#include <string.h>

#include "Rifle.h"

using namespace std;

Rifle::Rifle(string _name) : Arma(_name) {};

Rifle::~Rifle() {
	//cout << "Eliminando Rifle\n"; 
};


void Rifle::Shoot() {
	cout << "Púm púm púm!...\n";
};