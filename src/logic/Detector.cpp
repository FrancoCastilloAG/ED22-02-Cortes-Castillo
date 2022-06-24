#include <opencv2/objdetect.hpp>

#include "includes/Detector.h"

using namespace cv;
using namespace std;

vector<Persona> Detector::detect(Mat img,ListaPersonas l){
        vector<Rect> found;
        hog.detectMultiScale(img, found, 0, Size(2,2), Size(4,4), 1.05, 2, false);
        vector<Persona> personas;
        int contador=0;
        for (vector<Rect>::iterator i = found.begin(); i != found.end(); ++i){
            Rect &r = *i;
            Persona p(r);
            NodoPersona* nuevo(&p);
            nuevo.getPersona()->setId(contador);
            l.add(nuevo);
            putText(img,to_string(nuevo.getPersona()->getId()),Point(nuevo.getPersona()->getXCentro(),nuevo.getPersona()->getYCentro()),FONT_HERSHEY_COMPLEX,0.50,Scalar(255,0,0),1);
            rectangle(img, Point(nuevo.getPersona()->getXComienzo(), nuevo.getPersona()->getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 255, 0), 2);
            circle(img, Point(nuevo.getPersona()->getXCentro(), nuevo.getPersona()->getYCentro()), 3, Scalar(0, 0, 255), 3);
            contador++;
        }
        return personas;
}

void Detector::Resizebox(Rect & r) const{

}
