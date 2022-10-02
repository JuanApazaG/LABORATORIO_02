#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Semilla
{

private:
	string nombre;
	string color;
	float espacio;
	string textura;
	string forma;
public:
	void colocarse();
	void recogerse();
	void eliminarse();
};

