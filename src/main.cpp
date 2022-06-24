#include <opencv2/objdetect.hpp>

#include "logic/includes/Detector.h"
#include "logic/includes/Persona.h"
#include "logic/includes/NodoPersona.h"
#include "logic/includes/ListaPersonas.h"

using namespace cv;
using namespace std;

int main(int argc, char** argv){
    ListaPersonas Listap;
    Detector detector;
    Mat imagen = imread("C:/Users/franc/OneDrive/Escritorio/personas.jpg");
    vector<Persona> found = detector.detect(imagen,Listap);
    imshow("ventana", imagen);
    waitKey(0);
    /*
    VideoCapture cap("C:/Users/franc/OneDrive/Escritorio/videotaller.mp4");
    Mat imagen;
    while(true){
        //Mat imagen = imread("C:/Users/franc/OneDrive/Escritorio/personas.jpg");
        cap.read(imagen);
        vector<Persona> found = detector.detect(imagen);
        imshow("ventana", imagen);
        waitKey(20);
    }
    */
    return 0;
}