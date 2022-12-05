#ifndef NODO_H
#define NODO_H

class Nodo {
    private:
        Nodo *siguiente;
        int dato;

    friend class Pila;
};

#endif //NODO_H