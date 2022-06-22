#include "includes/ListaPersonas.h"
#include "includes/NodoPersona.h"

using namespace std;

ListaPersonas::ListaPersonas(){
    first->NULL;
    size=0;
}
NodoPersona*::getFirst(){
    return this->first;
}
NodoPersona::setFirst(NodoPersona* nodo){
    this->first=nodo;
}
NodoPersona::getNodoPersona(NodoPersona* nodo){
    NodoPersona crrt=this->first;
    if(isEmpty()) return NULL;
    while(crrt.getPersona().getId!=nodo->getPersona().getId){
        if(crrt=NULL){
            return NULL;
        }
        else if (crrt.getPersona().getId==nodo->getPersona().getId)
        {
            return crrt;
        }
        crrt=crrt.getNext();
    }
}
void add(NodoPersona* nodo){
    if(isEmpty()){
        this->first=nodo;
    }
    nodo->setNext(this->first);
    this->first->setNext(nodo);
}
Boolean::buscarNodo(){

}
Boolean::del(NodoPersona* nodo){
    NodoPersona crrt1=this->first;
    NodoPersona crrt2=crrt1.getNext;
    if(isEmpty()) return false;
    while(crrt2.getPersona().getId != nodo->getPersona().getId || crrt2=NULL){
        crrt1=crrt1.getNext();
        crrt2=crrt2.getNext();
    }
    if(crrt2.getPersona().getId==nodo->getPersona().getId){
        crrt1.setNext(crrt2.getNext());
        return true;
    }
    return false;
}

Boolean::isEmpty();
int getSize();