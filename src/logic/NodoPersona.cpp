#include "includes/NodoPersona.h"

using namespace std;

NodoPersona::Nodopersona(Persona p){
    this->next=NULL;
    this->persona=p;
}

Persona::getPersona(){
    return this->persona;
}

void NodoPersona::setNext(NodoPersona* next){
    this->next=NodoPersona;
}

NodoPersona* nodopersona::getNext(){
    return this->next;
}

NodoPersona::~NodoPersona();