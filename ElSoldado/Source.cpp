#include <iostream>
#include <stdlib.h>

using namespace std;


class Arma {
protected:
	string name;
public:
	Arma(string _name) : name(_name) {};
	virtual ~Arma() {
		//cout << "Eliminando Arma\n";
	};
	virtual void Shoot() = 0;
	void showName() {
		cout << name << endl;
	};
};


class Revolver: public Arma{
public:
	Revolver(string _name) : Arma(_name) {};
	~Revolver() { 
		//cout << "Eliminando Revolver\n"; 
	};
	void Shoot() {
		cout << "Pum...\n";
	};
};

class Escopeta : public Arma {
public:
	Escopeta(string _name) : Arma(_name) {};
	~Escopeta() { 
		//cout << "Eliminando Escopeta\n"; 
	};
	void Shoot() {
		cout << "¡Pááá!...\n";
	};
};

class Rifle : public Arma {
public:
	Rifle(string _name) : Arma(_name) {};
	~Rifle() { 
		//cout << "Eliminando Rifle\n"; 
	};
	void Shoot() {
		cout << "Púm púm púm!...\n";
	};
};

class Soldado {
	Arma* arma = nullptr;
public:
	Soldado() {};
	~Soldado() {
		//cout << "Eliminando Soldado\n"; 
		delete arma;
	};
	void TakeWeapon(Arma*& _arma) {
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
	void DropWeapon() 
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
	void Shoot()
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
	void ShowWeapon()
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

};


void menu(Soldado*&);


int main()
{
	Soldado *soldado1 = new Soldado();

	menu(soldado1);
	delete soldado1;
	system("pause");
	return 0;
}


void menu(Soldado*& soldado) {
	char input;
	do
	{
		system("cls");
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-\n\n";
		cout << "¿Qué desea hacer?\n";
		cout << "(presione el numero correspondiente a la opción del menú\n\n";
		cout << "1- Recoger arma\n";
		cout << "2- Dejar arma\n";
		cout << "3- Disparar\n";
		cout << "4- Ver arma en uso\n";
		cout << "X- Salir\n";
		cin >> input;
		switch (input)
		{
		case '1':
			do
			{
				system("cls");
				cout << "Por favor, escoja el arma que desea utilizar:\n\n";
				cout << "1- Revolver\n";
				cout << "2- Rifle\n";
				cout << "3- Escopeta\n";
				cout << "X- Volver atrás\n";
				cin >> input;
				Arma* arma = nullptr;
				switch (input)
				{
				case '1':
					arma = new Revolver("Revolver");
					soldado->TakeWeapon(arma);
					system("pause");
					break;
				case '2':
					arma = new Rifle("Rifle");
					soldado->TakeWeapon(arma);
					system("pause");
					break;
				case '3':
					arma = new Escopeta("Escopeta");
					soldado->TakeWeapon(arma);
					system("pause");
					break;
				default:
					delete arma;
					break;
				}

			} while (input != 'x' && input != 'X');
			input = '0';

			break;
		case '2':
			soldado->DropWeapon();
			system("pause");
			break;
		case '3':
			soldado->Shoot();
			system("pause");
			break;
		case '4':
			soldado->ShowWeapon();
			system("pause");
			break;
		default:
			break;
		}
	} while (input != 'x' && input != 'X');

};