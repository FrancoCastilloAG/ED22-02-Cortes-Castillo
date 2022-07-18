#include "includes/NodoPersona.h"
#include "includes/Persona.h"
using namespace std;

NodoPersona::NodoPersona(Persona *p){
    this->next=NULL;
    this->persona=p;
}
Persona* NodoPersona::getPersona(){
    return this->persona;
}
void NodoPersona::setNext(NodoPersona* next){
    this->next=next;
}

NodoPersona* NodoPersona::getNext(){
    return this->next;
}

NodoPersona::~NodoPersona(){
    
}