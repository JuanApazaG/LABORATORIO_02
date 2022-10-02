#include "espada.h"
#include "Cubo.h"
#include "Barca.h"
#include "BloqueDeMadera.h"
#include "Huevo.h"
#include "Pala.h"
#include "Hacha.h"
#include "Fillete.h"
#include "Flecha.h"
#include "DiscoDeMusica.h"
#include "Casco.h"
#include "Libro.h"
#include "Pico.h"
#include "Semilla.h"

using namespace std;

int main() {
	cout << "******Bienvenidos al programa de clases objetos metodos y propiedades...con punteros******";
	espada* espadaOro = new espada();
	espadaOro->ataque();
	espadaOro->vida();
	cout << endl;

	Cubo* cubo01 = new Cubo();
	cubo01->lleno();
	cubo01->vacio();
	cout << endl;

	Barca* barca01 = new Barca();
	barca01->flotar();
	cout << endl;
	barca01->moverse();
	cout << endl;

	BloqueDeMadera* bloqueDeMadera = new BloqueDeMadera();
	bloqueDeMadera->colocar();
	cout << endl;
	bloqueDeMadera->Eliminar();
	cout << endl;

	Huevo* huevo = new Huevo();
	huevo->eclocionar();
	cout << endl;
	huevo->lanzar();
	cout << endl;

	Pala* pala = new Pala();
	pala->durabilidad();
	cout << endl;
	pala->destruirse();
	cout << endl;

	Hacha* hacha = new Hacha();
	hacha->cortar();
	cout << endl;
	hacha->durabilidad();
	cout << endl;

	Fillete* filete = new Fillete();
	filete->cocinarse();
	cout << endl;
	filete->curar();
	cout << endl;

	Flecha* flecha = new Flecha();
	flecha->danar();
	flecha->flotar();
	cout << endl;

	DiscoDeMusica* discoDeMusica = new DiscoDeMusica();
	discoDeMusica->reproducir();
	discoDeMusica->lanzarse();
	cout << endl;

	Casco* casco = new Casco();
	casco->desgastarse();
	casco->reducirDano();
	cout << endl;

	Libro* libro = new Libro();
	libro->encantar();
	libro->destruirse();
	cout << endl;

	Pico* pico = new Pico();
	pico->encantarse();
	pico->picar();
	cout << endl;

	Semilla* semilla = new Semilla();
	semilla->recogerse();
	semilla->colocarse();
	cout << endl;

}