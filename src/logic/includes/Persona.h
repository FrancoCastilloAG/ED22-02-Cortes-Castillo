#ifndef Persona_h
#define Persona_h

#include <opencv2/opencv.hpp>

class Persona{
private:
    int id;
    int contador_entrada;
    int contador_salida;
    int xComienzo;
    int yComienzo;
    int xFin;
    int yFin;
    int xCentro;
    int yCentro;
public:
    Persona(cv::Rect&);
    int getId();
    void setId(int identidad);
    int getContador_salida();
    int getContador_entrada();
    int getXComienzo();
    int getYComienzo();
    int getXFin();
    int getYFin();
    int getXCentro();
    int getYCentro();
};

#endif