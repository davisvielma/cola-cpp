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
	
	return 0;
}
