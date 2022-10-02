#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Barca
{
private:
	string color;
	float velocidad;
	float espacio;
	string vida;
	string textura;
	string forma;
	int tamano;
public:
	void flotar();
	void moverse();
	void transformarse();
	void hundirse();

};

