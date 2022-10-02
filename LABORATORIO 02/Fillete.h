#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class Fillete
{

private:
	string color;
	string vida;
	string textura;
	string forma;
	int tamano;
	int tipo;
public:
	void curar();
	void pudrirse();
	void destruirse();
	void cocinarse();
};

