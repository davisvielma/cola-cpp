#ifndef COLA_H
#define COLA_H

#include "Nodo.h"

class Cola {
	private:
		Nodo *inicio;
		Nodo *fin;
		int tamano;

		void cambiarTamano(int);

	public:
		explicit Cola();
		~Cola();

		inline int verInicio() const { return this->inicio->siguiente->dato; } 
		inline int verTamano() const { return this->tamano; }

		bool vacio() const;
		void insertarElemento(int);
		void eliminarElemento();
		void imprimirElementos() const;
};

#endif //COLA_H