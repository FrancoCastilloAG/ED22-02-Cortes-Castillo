#ifndef ListaPersonas_h
#define ListaPersonas_h

#include "NodoPersona.h"

using namespace std;

class ListaPersonas{
    private:
    NodoPersona* first;
    int size;
    public:
    ListaPersonas();
    NodoPersona* getFirst();
    NodoPersona* setFirst(NodoPersona* nodo);
    NodoPersona* getNodoPersona(NodoPersona* nodo);
    void add(NodoPersona* nodo);
    bool del(NodoPersona* nodo);
    bool isEmpty();
    int getSize();
    double getDistance(NodoPersona* nodo1, NodoPersona* nodo2);
};

#endif