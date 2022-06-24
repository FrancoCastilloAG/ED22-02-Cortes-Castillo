#ifndef Detector_h
#define Detector_h

#include "NodoPersona.h"
#include "ListaPersonas.h"

using namespace cv;
using namespace std;

class Detector{
private:
    HOGDescriptor hog;
public:
    Detector() : hog(){
        hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    }    
    vector<Persona> detect(Mat img,ListaPersonas l);
    void Resizebox(Rect & r) const;
};

#endif