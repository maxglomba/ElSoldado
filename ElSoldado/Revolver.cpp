
#include <iostream>
#include <string.h>

#include "Revolver.h"

using namespace std;

Revolver::Revolver(string _name) : Arma(_name) {};

Revolver::~Revolver() {
	//cout << "Eliminando Revolver\n"; 
};

void Revolver::Shoot() {
	cout << "Pum...\n";
};