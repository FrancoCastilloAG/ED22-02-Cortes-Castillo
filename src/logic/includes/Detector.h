#ifndef DETECTOR_H
#define DETECTOR_H

#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include <iostream>
#include <iomanip>

#include "Persona.h"

<<<<<<< HEAD
#include "NodoPersona.h"
#include "ListaPersonas.h"
=======
>>>>>>> 67e95bfc30b33d695a8e0682fd8b8cc50b92a0db

using namespace cv;
using namespace std;


class Detector
{
private:
    enum Mode { Default, Daimler } m;
    HOGDescriptor hog, hog_d;
public:
    Detector() : m(Default), hog(), hog_d(Size(48, 96), Size(16, 16), Size(8, 8), Size(8, 8), 9){
        hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
        hog_d.setSVMDetector(HOGDescriptor::getDaimlerPeopleDetector());
    }    
<<<<<<< HEAD
    vector<Persona> detect(Mat img,ListaPersonas l);
    void Resizebox(Rect & r) const;
=======

    void toggleMode();

    string modeName() const;

    vector<Persona> detect(InputArray img);

    void adjustRect(Rect & r) const;
>>>>>>> 67e95bfc30b33d695a8e0682fd8b8cc50b92a0db
};

#endif