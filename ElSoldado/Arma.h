#pragma once

using namespace std;

class Arma {
protected:
	string name;
public:
	Arma(string _name);
	virtual ~Arma();
	virtual void Shoot() = 0;
	void showName();
};
