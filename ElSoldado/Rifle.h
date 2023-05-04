#pragma once
#include "Arma.h"

using namespace std;

class Rifle : public Arma {
public:
	Rifle(string _name);
	~Rifle();
	void Shoot();
};