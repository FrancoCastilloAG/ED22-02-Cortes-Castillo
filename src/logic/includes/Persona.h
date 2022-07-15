#ifndef Persona_h
#define Persona_h

#include <opencv2/opencv.hpp>

class Persona{
private:
    int xComienzo;
    int yComienzo;
    int xFin;
    int yFin;
    int xCentro;
    int yCentro;
    bool entrante;
    bool saliente;
public:
    Persona(cv::Rect&);
    int getXComienzo();
    int getYComienzo();
    int getXFin();
    int getYFin();
    int getXCentro();
    int getYCentro();
    bool getEntrante();
    bool getSaliente();
    void setEntrante(bool b);
    void setSaliente(bool b);
};

#endif