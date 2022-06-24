#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include <iostream>
#include <iomanip>

#include "logic/includes/Detector.h"
#include "logic/includes/Persona.h"
#include "logic/includes/ListaPersonas.h"
#include "logic/includes/NodoPersona.h"
using namespace cv;
using namespace std;
void ReconocerPersonas(){
    
    Detector detector;
    Mat imagen;
    imagen = imread("C:/Datos Taller/image0292.png");
    detector.toggleMode();
    cout << detector.modeName() << endl;

    vector<Persona> found = detector.detect(imagen);
    for (vector<Persona>::iterator i = found.begin(); i != found.end(); ++i)
    {
        Persona &p = *i;
        cout << "(" << p.getXComienzo() << ", " << p.getYComienzo() << ")" << endl;
        //detector.adjustRect(p);
        rectangle(imagen, Point(p.getXComienzo(), p.getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 0, 255), 2);
        circle(imagen,Point(p.getXCentro(), p.getYCentro()), 3,Scalar(0, 0, 255), 3);
        circle(imagen,Point(p.getXComienzo(), p.getYComienzo()), 3,Scalar(255, 0, 255), 2);
        circle(imagen,Point(p.getXFin(), p.getYFin()), 3,Scalar(0, 255, 255), 2);
    }
    
    imshow("People detector", imagen);
    waitKey(0);
}
int FlujoEntrada(ListaPersonas* entrantes){
    return entrantes->getSize();
}
int FlujoSalida(ListaPersonas* salientes){
    return salientes->getSize();
}
double FlujoEntradaPorHora(ListaPersonas* entrantes,int horas){
    double valor=(entrantes->getSize())/horas;
    return valor;
}
double FlujoSalidaPorhora(ListaPersonas* salientes, int horas){
    double valor=(salientes->getSize())/horas;
    return valor;
}
ListaPersonas* TraficoIndividualEntrantes(ListaPersonas* entrantes){
    return entrantes->getFilteredList();
}
ListaPersonas* TraficoIndividualSalientes(ListaPersonas* salientes){
    return salientes->getFilteredList();
}
void showList(ListaPersonas* lista){
    NodoPersona* crrt=lista->getFirst();
    if(crrt==nullptr) return ;
    while(crrt!=nullptr){
        cout<<crrt->getPersona()->getId()<<endl;
        crrt=crrt->getNext();
    }

}
int main(int argc, char** argv)
{
    cout<<"Hello world!"<<endl;
    ListaPersonas* entrantes= new ListaPersonas();
    ListaPersonas* salientes= new ListaPersonas();

    //ReconocerPersonas();

    return 0;
}