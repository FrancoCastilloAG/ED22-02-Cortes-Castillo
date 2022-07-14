#ifndef Detector_h
#define Detector_h

#include "Persona.h"

<<<<<<< Updated upstream
=======
#include "NodoPersona.h"
#include "ListaPersonas.h"

>>>>>>> Stashed changes
using namespace cv;
using namespace std;

class Detector{
private:
    HOGDescriptor hog;
public:
    Detector() : hog(){
        hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    }    
<<<<<<< Updated upstream
    vector<Persona> detect(InputArray img);
    void Resizebox(Rect & r) const;
=======
    vector<Persona> detect(Mat img,ListaPersonas l);
    void Resizebox(Rect & r) const;

    void toggleMode();

    string modeName() const;

    vector<Persona> detect(InputArray img);

    void adjustRect(Rect & r) const;
>>>>>>> Stashed changes
};

#endif