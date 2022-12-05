#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Cola.h"

class Controlador {
	private:
		void colaVacia() const;

	public:
		explicit Controlador() { }
		~Controlador() { }

		void menu() const;
		int pedirDato();
		void agregarDato(Cola *, int);	
		void eliminarDato(Cola *);
		void verPrimerDato(Cola *) const;
		void imprimirDatos(Cola *) const;
		void verTamano(Cola *) const;
};

#endif //CONTROLADOR_H