#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class BloqueDeMadera
{

private:
	string color;
	string vida;
	string textura;
	string forma;
	int tamano;
	int demesiones;
public:
	void colocar();
	void Eliminar();
	void Quemar();
};

