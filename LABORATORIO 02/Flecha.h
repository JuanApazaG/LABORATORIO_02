#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Flecha
{

private:
	string dano;
	string aceleracion;
	string color;
	float velocidad;
	float espacio;
	string textura;
	string forma;
	int tamano;
public:
	void flotar();
	void volar();
	void transformarse();
	void danar();
};

