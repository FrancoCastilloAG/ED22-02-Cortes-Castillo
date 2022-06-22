#ifndef NodoPersona_h
#define NodoPersona_h

#include "Persona.h"

using namespace std;

class NodoPersona{
private:
    NodoPersona* next;
    Persona persona;
public:
    NodoPersona(Persona p);
    void setNext(NodoPersona* nodo);
    Persona getPersona();
    NodoPersona* getNext(); 
    ~NodoPersona();
};

#endif