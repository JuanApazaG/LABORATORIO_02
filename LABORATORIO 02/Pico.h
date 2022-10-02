#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Pico
{

private:
	string dano;
	string color;
	float espacio;
	string vida;
	string textura;
	string forma;
	int tamano;
public:
	void picar();
	void hacerDano ();
	void romperse();
	void encantarse();
};

