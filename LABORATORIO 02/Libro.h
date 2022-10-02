#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Libro
{

private:
	string nombre;
	string numeroDePaginas;
	string color;
	float espacio;
	string textura;
	string forma;
	int tamano;
public:
	void encantar();
	void destruirse();
	void transformarse();
};

