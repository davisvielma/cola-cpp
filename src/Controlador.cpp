#include "Controlador.h"
#include <iostream>

using namespace std;

#define VERDE "\x1B[32m"
#define AMARILLO "\x1B[33m"

void Controlador::menu() const {
	cout << VERDE "\n\t\tPractica de Cola (Queue)" << endl;
	cout << "\n1) Insertar un dato a la cola." << endl;
	cout << "2) Eliminar un dato de la cola." << endl;
	cout << "3) Ver primer elemento de la cola." << endl;
	cout << "4) Ver todos los datos de la cola." << endl;
	cout << "5) Ver numero de elementos en la cola." << endl;
	cout << "6) Salir." << endl;
	cout << "\nElija una opcion: ";
}

void Controlador::colaVacia() const {
	cout << AMARILLO "\nCola vaciá." << endl;
}

int Controlador::pedirDato() {
	int dato = 0;

	cout << AMARILLO "\nIngrese un numero: ";
	cin >> dato;

	return dato;
}

void Controlador::agregarDato(Cola *c, int dato) {
	c->insertarElemento(dato);
}

void Controlador::eliminarDato(Cola *c) {
	if (c->vacio()) {
		this->colaVacia();
		return;
	}

	cout << AMARILLO "\nSe elimino el numero: " << c->verInicio() << endl;
	c->eliminarElemento();
}

void Controlador::verPrimerDato(Cola *c) const {
	if (c->vacio()) {
		this->colaVacia();
		return;
	}

	cout << AMARILLO "\nPrimer elemento en la pila: " << c->verInicio() << endl;
}

void Controlador::imprimirDatos(Cola *c) const {
	if(c->vacio()) {
		this->colaVacia();
		return;
	}

	cout << AMARILLO "" << endl;
	c->imprimirElementos();
}

void Controlador::verTamano(Cola *c) const {
	cout << AMARILLO "\nNumero de elementos de la cola: " << c->verTamano() << endl;
}