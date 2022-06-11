#include <opencv2/objdetect.hpp>
#include "includes/Detector.h"

using namespace cv;
using namespace std;

vector<Persona> Detector::detect(InputArray img){
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
