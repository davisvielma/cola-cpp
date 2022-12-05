#include <iostream>
#include "Cola.h"

using namespace std;

int main(int argc, char const *argv[]) {

	Cola *cola = new Cola();

	if(cola->vacio()) {
		cout << "La cola esta vacia" << endl;
	} else {
		cout << "La cola tiene valores" << endl;
	}

	cola->insertarElemento(45);

	if(cola->vacio()) {
		cout << "La cola esta vacia" << endl;
	} else {
		cout << "La cola tiene el valor: " << cola->verInicio() << endl;
		cout << "Su tamaño es: " << cola->verTamano() << endl;
	}

	cola->insertarElemento(7);

	if(cola->vacio()) {
		cout << "La cola esta vacia" << endl;
	} else {
		cout << "La cola tiene el valor: " << cola->verInicio() << endl;
		cout << "Su tamaño es: " << cola->verTamano() << endl;
	}

	cola->insertarElemento(81);

	if(cola->vacio()) {
		cout << "La cola esta vacia" << endl;
	} else {
		cout << "La cola tiene el valor: " << cola->verInicio() << endl;
		cout << "Su tamaño es: " << cola->verTamano() << endl;
	}

	cola->imprimirElementos();

	cola->eliminarElemento();
	cola->eliminarElemento();
	cout << "La cola tiene el valor: " << cola->verInicio() << endl;
	cout << "Su tamaño es: " << cola->verTamano() << endl;
	
	return 0;
}
