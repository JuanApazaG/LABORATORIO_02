#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Casco
{

private:
	string color;
	float durabilidad;
	float espacio;
	string textura;
	string forma;
	int tamano;
public:
	void durar();
	void reducirDano();
	void desgastarse();
};

