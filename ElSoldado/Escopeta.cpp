
#include <iostream>
#include <string.h>

#include "Escopeta.h"

using namespace std;

Escopeta::Escopeta(string _name) : Arma(_name) {};

Escopeta::~Escopeta() {
	//cout << "Eliminando Escopeta\n"; 
};

void Escopeta::Shoot() {
	cout << "¡Pááá!...\n";
};