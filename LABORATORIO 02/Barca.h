#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Barca
{
	//agreagamos sus propiedades
private:
	string color;
	float velocidad;
	float espacio;
	string vida;
	string textura;
	string forma;
	int tamano;
public:
	//agregamos sus metodos
	void flotar();
	void moverse();
	void transformarse();
	void hundirse();

};

