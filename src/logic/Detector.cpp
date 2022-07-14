#include <opencv2/objdetect.hpp>
#include "includes/Detector.h"

using namespace cv;
using namespace std;

<<<<<<< Updated upstream
vector<Persona> Detector::detect(InputArray img){
=======

#include "includes/Detector.h"

void Detector::toggleMode() { m = (m == Default ? Daimler : Default); }
    
string Detector::modeName() const { return (m == Default ? "Default" : "Daimler"); }

vector<Persona> Detector::detect(InputArray img){
        // Run the detector with default parameters. to get a higher hit-rate
        // (and more false alarms, respectively), decrease the hitThreshold and
        // groupThreshold (set groupThreshold to 0 to turn off the grouping completely).
>>>>>>> Stashed changes
        vector<Rect> found;
        hog.detectMultiScale(img, found, 0, Size(2,2), Size(4,4), 1.05, 2, false);
        vector<Persona> personas;

        for (vector<Rect>::iterator i = found.begin(); i != found.end(); ++i){
            Rect &r = *i;
            Persona p(r);
            personas.push_back(p);
        }

        return personas;
}

void Detector::Resizebox(Rect & r) const{

}
