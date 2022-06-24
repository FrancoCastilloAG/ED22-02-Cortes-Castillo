#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include <iostream>
#include <iomanip>

using namespace cv;
using namespace std;

<<<<<<< HEAD
vector<Persona> Detector::detect(Mat img,ListaPersonas l){
=======

#include "includes/Detector.h"

void Detector::toggleMode() { m = (m == Default ? Daimler : Default); }
    
string Detector::modeName() const { return (m == Default ? "Default" : "Daimler"); }

vector<Persona> Detector::detect(InputArray img){
        // Run the detector with default parameters. to get a higher hit-rate
        // (and more false alarms, respectively), decrease the hitThreshold and
        // groupThreshold (set groupThreshold to 0 to turn off the grouping completely).
>>>>>>> 67e95bfc30b33d695a8e0682fd8b8cc50b92a0db
        vector<Rect> found;
        if (m == Default)
            hog.detectMultiScale(img, found, 0, Size(2,2), Size(4,4), 1.05, 2, false);
        else if (m == Daimler)
            hog_d.detectMultiScale(img, found, 1, Size(2,2), Size(4,4), 1.05, 3, true);

        // Convertir un objeto Rect a un objeto persona
        vector<Persona> personas;

        for (vector<Rect>::iterator i = found.begin(); i != found.end(); ++i){
            Rect &r = *i;
            Persona p(r);
<<<<<<< HEAD
            NodoPersona* nuevo(&p);
            nuevo.getPersona()->setId(contador);
            l.add(nuevo);
            putText(img,to_string(nuevo.getPersona()->getId()),Point(nuevo.getPersona()->getXCentro(),nuevo.getPersona()->getYCentro()),FONT_HERSHEY_COMPLEX,0.50,Scalar(255,0,0),1);
            rectangle(img, Point(nuevo.getPersona()->getXComienzo(), nuevo.getPersona()->getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 255, 0), 2);
            circle(img, Point(nuevo.getPersona()->getXCentro(), nuevo.getPersona()->getYCentro()), 3, Scalar(0, 0, 255), 3);
            contador++;
=======
            personas.push_back(p);
>>>>>>> 67e95bfc30b33d695a8e0682fd8b8cc50b92a0db
        }

        return personas;
}

void Detector::adjustRect(Rect & r) const{
        // The HOG detector returns slightly larger rectangles than the real objects,
        // so we slightly shrink the rectangles to get a nicer output.
        r.x += cvRound(r.width*0.1);
        r.width = cvRound(r.width*0.8);
        r.y += cvRound(r.height*0.07);
        r.height = cvRound(r.height*0.8);
}