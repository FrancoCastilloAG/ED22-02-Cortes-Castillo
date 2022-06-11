#ifndef Detector_h
#define Detector_h

#include "Persona.h"

using namespace cv;
using namespace std;

class Detector{
private:
    HOGDescriptor hog;
public:
    Detector() : hog(){
        hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    }    
    vector<Persona> detect(InputArray img);
    void Resizebox(Rect & r) const;
};

#endif