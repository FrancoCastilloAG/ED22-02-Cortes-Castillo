#include "includes/Persona.h"
<<<<<<< Updated upstream

Persona::Persona(cv::Rect &r){
=======
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include <iostream>
#include <iomanip>
using namespace cv;
Persona::Persona(Rect &r){
>>>>>>> Stashed changes
    xComienzo = r.x;
    yComienzo = r.y;
    xFin = r.x + r.width;
    yFin = r.y + r.height;
    xCentro = r.x + ((float)r.width/2.0);
    yCentro = r.y + ((float)r.height/2.0);
}

int Persona::getXComienzo(){
    return xComienzo;
}

int Persona::getYComienzo(){
    return yComienzo;
}

int Persona::getXFin(){
    return xFin;
}

int Persona::getYFin(){
    return yFin;
}

int Persona::getXCentro(){
    return xCentro;
}

int Persona::getYCentro(){
    return yCentro;
}