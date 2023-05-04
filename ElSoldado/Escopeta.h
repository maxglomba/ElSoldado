#pragma once
#include "Arma.h"

using namespace std;

class Escopeta : public Arma {
public:
	Escopeta(string _name);
	~Escopeta();
	void Shoot();
};