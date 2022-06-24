#ifndef NodoPersona_h
#define NodoPersona_h

#include "Persona.h"

using namespace std;

class NodoPersona{
private:
    NodoPersona* next;
    Persona* persona;
    int rep;
public:
    NodoPersona(Persona* p);
    void setNext(NodoPersona* nodo);
    Persona* getPersona();
    NodoPersona* getNext(); 
    int getRep();
    void setRep(int rep);
    ~NodoPersona();
};

#endif