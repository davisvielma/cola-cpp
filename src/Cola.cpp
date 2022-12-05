#include "Cola.h"
#include <iostream>

Cola::Cola() {
	this->inicio = new Nodo();
	this->fin = new Nodo();
	this->tamano = 0;

	this->inicio->siguiente = this->fin;
	this->fin->anterior = this->inicio;
}

bool Cola::vacio() const {
	return (this->inicio->siguiente == this->fin) ? true : false;
}

void Cola::cambiarTamano(int digito) {
	this->tamano += digito;
}

void Cola::insertarElemento(int dato) {
	Nodo *aux = new Nodo();
	aux->dato = dato;
	aux->siguiente = this->fin;
	aux->anterior = this->fin->anterior;

	this->fin->anterior->siguiente = aux;
	this->fin->anterior = aux;
	this->cambiarTamano(1);
}

void Cola::eliminarElemento() {
	if(!this->vacio()) {
		Nodo *aux = this->inicio->siguiente->siguiente;
		delete this->inicio->siguiente;

		this->inicio->siguiente = aux;
		aux->anterior = this->inicio;
		this->cambiarTamano(-1);
	}
}

void Cola::imprimirElementos() const {
	if(!this->vacio()) {
		Nodo *aux = this->inicio->siguiente;

		std::cout << "| ";

		while(aux != this->fin) {
			std::cout << aux->dato << " | ";
			aux = aux->siguiente;
		}

		std::cout << std::endl;
	}
}

Cola::~Cola() {
	while(!this->vacio()) {
		this->eliminarElemento();
	}

	delete this->inicio;
	delete this->fin;
}
