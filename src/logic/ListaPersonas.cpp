#include "includes/ListaPersonas.h"
#include <math.h>
using namespace std;

ListaPersonas::ListaPersonas(){
    first=nullptr;
    size=0;
}
NodoPersona* ListaPersonas::getFirst(){
    return this->first;
}
NodoPersona* ListaPersonas::setFirst(NodoPersona* nodo){
    return this->first=nodo;
}
NodoPersona* ListaPersonas::getNodoPersona(NodoPersona* nodo){
    NodoPersona* crrt=this->first;
    if(isEmpty()) return nullptr;
    while((crrt->getPersona())->getId()!=(nodo->getPersona())->getId()){
        if(crrt=nullptr){
            return nullptr;
        }
        else if ((crrt->getPersona())->getId()==(nodo->getPersona())->getId())
        {
            return crrt;
        }
        crrt=crrt->getNext();
    }
    return nullptr;
}
void ListaPersonas::add(NodoPersona* nodo){
    if(isEmpty()){
        this->first=nodo;
        return ;
    }
    
    nodo->setNext(this->first);
    this->first->setNext(nodo);
    setFirst(nodo);
}
double ListaPersonas:: getDistance(NodoPersona* nodo1, NodoPersona* nodo2){
        Persona* p1= nodo1->getPersona();
        Persona* p2= nodo2->getPersona();
        double suma;
        double restaX=p1->getXCentro()-p2->getXCentro();
        double restaY= p2->getYCentro()-p2->getYCentro();
        suma= pow(restaX,2)+pow(restaY,2);
        return sqrt(suma);
}

bool ListaPersonas::del(NodoPersona* nodo){
    NodoPersona* crrt1=this->first;
    NodoPersona* crrt2=crrt1->getNext();
    if(isEmpty()) return false;
    while((crrt2->getPersona())->getId()!=(nodo->getPersona())->getId() || crrt2!=nullptr){
        crrt1=crrt1->getNext();
        crrt2=crrt2->getNext();
    }
    if(crrt2->getPersona()->getId()==nodo->getPersona()->getId()){
        crrt1->setNext(crrt2->getNext());
        return true;
    }
    return false;
}
bool ListaPersonas::isEmpty(){
    return first==nullptr;
}
int ListaPersonas::getSize(){
    return this->size;
}
