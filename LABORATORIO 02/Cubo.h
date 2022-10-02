#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Cubo
{
private:
	string nombre;
	string color;
	float tamaño;
	string forma;
	float dimension;
	string textura;
public:

	void recoger();
	void vaciar();
	void vacio();
	void lleno();
};

