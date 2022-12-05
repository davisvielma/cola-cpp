#include <iostream>
#include "Cola.h"
#include "Controlador.h"

using namespace std;

#define ROJO "\x1B[31m"

int main(int argc, char const *argv[]) {

	Cola *cola = new Cola();
	Controlador controlador;
	int opcion = 0;

	do {

		try {
			controlador.menu();
			cin >> opcion;

			if(opcion < 1 || opcion > 6) throw -1;

			switch(opcion) {
				case 1:
					controlador.agregarDato(cola, controlador.pedirDato());
                    break;
                case 2:
                	controlador.eliminarDato(cola);
                	break;
                case 3:
                	controlador.verPrimerDato(cola);
                	break;
                case 4:
                	controlador.imprimirDatos(cola);
                	break;
                case 5:
                	controlador.verTamano(cola);
                	break;
			}

		} catch(int e) {
            cout << ROJO "\nERROR!! Opción invalida." << endl;
		}

	} while(opcion != 6);

	delete cola;
	
	return 0;
}
