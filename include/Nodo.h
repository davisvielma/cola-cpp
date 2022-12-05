#ifndef NODO_H
#define NODO_H

class Nodo {
    private:
    	Nodo *anterior;
        Nodo *siguiente;
        int dato;

    friend class Cola;
};

#endif //NODO_H