#include <iostream>
#include "Arma.h"

using namespace std;

Arma::Arma(string _name) {
	name = _name;
};

 Arma::~Arma() {
 //cout << "Eliminando Arma\n";
};

 void Arma::showName() {
	 cout << name << endl;
 };