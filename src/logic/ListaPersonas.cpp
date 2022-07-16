#include "includes/ListaPersonas.h"
#include "includes/NodoPersona.h"
#include "includes/Persona.h"
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
void ListaPersonas::add(NodoPersona* nodo){
    if(isEmpty()){
        this->first=nodo;
        return ;
    }  
    nodo->setNext(this->first); 
    this->first->setNext(nodo);
    setFirst(nodo);
}
void ListaPersonas :: CompareAdd(NodoPersona* nodo){
    double distancemin=1000000000;
    NodoPersona* nodomin= nullptr;
    
    NodoPersona* crrt= first;
    while(crrt!=nullptr){
        if(getDistance(crrt,nodo)<distancemin){
            distancemin=getDistance(crrt,nodo);
            nodomin=crrt;
        }
        crrt=crrt->getNext();
    } 
    changeNodos(nodo,nodomin);
}
void ListaPersonas:: changeNodos(NodoPersona* n1/*nuevo*/, NodoPersona* n2/*antiguo*/){
    if(first->getNext()==nullptr){
        this->first=n1;
    }
    NodoPersona* crrt= first;
    while((crrt->getNext())!=nullptr){
        if(crrt->getNext()==n2){
            changeEstado(n1,n2);
            n1->setNext((crrt->getNext())->getNext());
            crrt->setNext(n1);
            break;
        }
    }
}
void ListaPersonas:: changeEstado(NodoPersona* n1, NodoPersona* n2){
    Persona* p1= n1->getPersona();//nueva
    Persona* p2= n2->getPersona();//antigua
    //entrante
    if(p1->getYCentro()<=384 && p2->getYCentro()>=384 ){
        p1->setSaliente(true);
    }else if(p1->getYCentro()>=384 && p2->getYCentro()<=384 ){
        p1->setEntrante(true);
    }
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
bool ListaPersonas::isEmpty(){
    return first==nullptr;
}
int ListaPersonas::getSize(){
    return this->size;
}
