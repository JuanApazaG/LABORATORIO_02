#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class Pala
{

private:
	string color;
	float velocidad;
	string vida;
	string textura;
	string forma;
	int tamano;
public:
	void picar();
	void danar();
	void destruirse();
	void durabilidad();
};

