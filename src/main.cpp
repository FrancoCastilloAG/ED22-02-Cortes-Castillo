#include <opencv2/objdetect.hpp>

#include "logic/includes/Detector.h"
#include "logic/includes/Persona.h"
#include "logic/includes/NodoPersona.h"
#include "logic/includes/ListaPersonas.h"

using namespace cv;
using namespace std;

int main(int argc, char** argv){
    Detector detector;
    Mat imagen = imread("C:/Users/franc/OneDrive/Escritorio/personas.jpg");

    vector<Persona> found = detector.detect(imagen);
    /*
    for (vector<Persona>::iterator i = found.begin(); i != found.end(); ++i){
        Persona &p = *i;
        putText(imagen,"id de la persona",Point(p.getXCentro(),p.getYCentro()),FONT_HERSHEY_COMPLEX,0.50,Scalar(255,0,0),2);
        rectangle(imagen, Point(p.getXComienzo(), p.getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 255, 0), 2);
        circle(imagen, Point(p.getXCentro(), p.getYCentro()), 3, Scalar(0, 0, 255), 3);
    }
    */
    imshow("ventana", imagen);
    waitKey(0);
    return 0;
}