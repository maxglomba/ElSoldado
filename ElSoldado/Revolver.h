#pragma once
#include "Arma.h"

using namespace std;

class Revolver : public Arma {
public:
	Revolver(string _name);
	~Revolver();
	void Shoot();
};