#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Huevo
{

private:
	string color;
	float espacio;
	string vida;
	string textura;
	string forma;
	int tamano;
public:
	void explotar();
	void lanzar();
	void transformarse();
	void eclocionar();
	void destruise();
};

