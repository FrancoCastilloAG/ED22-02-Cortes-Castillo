#include <opencv2/objdetect.hpp>

#include "includes/Detector.h"

using namespace cv;
using namespace std;

vector<Persona> Detector::detect(Mat img){
        vector<Rect> found;
        hog.detectMultiScale(img, found, 0, Size(2,2), Size(4,4), 1.05, 2, false);
        vector<Persona> personas;
        int contador=0;
        for (vector<Rect>::iterator i = found.begin(); i != found.end(); ++i){
            Rect &r = *i;
            Persona p(r);
            NodoPersona nuevo(p);
            //setear id
            putText(img,"hola",Point(nuevo.getPersona()->getXCentro(),nuevo.getPersona()->getYCentro()),FONT_HERSHEY_COMPLEX,0.50,Scalar(255,0,0),2);
            //rectangle(img, Point(p.getXComienzo(), p.getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 255, 0), 2);
            //circle(img, Point(p.getXCentro(), p.getYCentro()), 3, Scalar(0, 0, 255), 3);
            //personas.push_back(p);
            contador++;
        }
        return personas;
}

void Detector::Resizebox(Rect & r) const{

}
