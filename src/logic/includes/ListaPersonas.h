#ifndef ListaPersonas_h
#define ListaPersonas_h

#include "NodoPersona.h"

using namespace std;

class ListaPersonas{
    private:
    NodoPersona first;
    int size;
    public:
    NodoPersona*::getFirst();
    NodoPersona::setFirst(NodoPersona* nodo);
    NodoPersona::getNodoPersona(NodoPersona* nodo);
    void add(NodoPersona* nodo);
    Boolean::del(NodoPersona* nodo);
    Boolean::isEmpty();
    int getSize();
}

#endif