#include "includes/NodoPersona.h"

using namespace std;

NodoPersona::NodoPersona(Persona* p){
    this->next=NULL;
    this->persona=p;
    this->rep=0;
}
int NodoPersona::getRep(){
    return this->rep;
}    
void NodoPersona::setRep(int rep){
    this->rep=rep;
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