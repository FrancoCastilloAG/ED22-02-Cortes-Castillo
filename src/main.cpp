#include <opencv2/objdetect.hpp>
#include "logic/includes/Detector.h"
#include "logic/includes/Persona.h"
#include "logic/includes/ListaPersonas.h"
#include "logic/includes/NodoPersona.h"
using namespace cv;
using namespace std;
void dibujarRectangulos(vector<Persona> found,Mat imagen){
    for (vector<Persona>::iterator i = found.begin(); i != found.end(); ++i) {
        Persona &p = *i;
        rectangle(imagen, Point(p.getXComienzo(), p.getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 0, 255), 2);
        circle(imagen,Point(p.getXCentro(), p.getYCentro()), 3,Scalar(0, 0, 255), 3);
        circle(imagen,Point(p.getXComienzo(), p.getYComienzo()), 3,Scalar(255, 0, 255), 2);
        circle(imagen,Point(p.getXFin(), p.getYFin()), 3,Scalar(0, 255, 255), 2);       
   }
}
void ReconocerPersonas(ListaPersonas* Detectadas){
    int fin=214;
    string nombre="Captura de pantalla";
    for(int j=178;j<fin+1;j++){
        Detector detector;
        Mat imagen;
        imagen = imread("C:/Datos Taller/"+nombre+" ("+to_string(j)+").png" );
       
        detector.toggleMode();
       
        Point p1(0, 384),p2(1366, 384);//line point´s
        int thickness = 1; //weith line
        line(imagen, p1, p2, Scalar(255, 0, 0),thickness, LINE_8); //draw a line between p1 and p2
        
        vector<Persona> found = detector.detect(imagen);
        dibujarRectangulos(found,imagen);
        for(int i=0;i<found.size();i++){
            NodoPersona* nodo= new NodoPersona(found[i]);
            if(j==178){
                Detectadas->add(nodo);
            }else {
                Detectadas->CompareAdd(nodo);
            }
        }
   }
   
}
int FlujoEntrada(ListaPersonas* Detectadas){
    int count=0;
    NodoPersona* crrt = Detectadas->getFirst();
    while(crrt!=nullptr){
        if(crrt->getPersona()->getEntrante()){
             count++;
        }
        crrt=crrt->getNext();
    }
    return count;
}
int FlujoSalida(ListaPersonas* Detectadas){
    int count=0;
    NodoPersona* crrt = Detectadas->getFirst();
    while(crrt!=nullptr){
        if(crrt->getPersona()->getSaliente()){
             count++;
        }
        crrt=crrt->getNext();
    }
    return count;
}
double FlujoEntradaPorHora(ListaPersonas* Detectadas,int horas){
    double valor=(FlujoEntrada(Detectadas))/horas;
    return valor;
}
double FlujoSalidaPorhora(ListaPersonas* Detectadas, int horas){
    double valor=(FlujoSalida(Detectadas))/horas;
    return valor;
}
/*void showList(ListaPersonas* lista){
    NodoPersona* crrt=lista->getFirst();
    if(crrt==nullptr) return ;
    while(crrt!=nullptr){
        cout<<crrt->getPersona()->getId()<<endl;
        //cout
        crrt=crrt->getNext();
    }
}*/

int main(int argc, char** argv)
{
    ListaPersonas* Detectadas= new ListaPersonas();
    cout<<"Hello world!"<<endl;
    ReconocerPersonas(Detectadas);
    //menu
    int opcion=-1;
    int op=-2;
    cout<<"Hola Bienvenido al menú"<<endl;
    cout<<"¿Desea entrar como administrador[0] o como guardia[1]?"<<endl; cin>>opcion;
    if(opcion==0){
        cout<<"Se abriran ventanas con las imagenes a analizar"<<endl;
        string nombre="Captura de pantalla";
        int fin=214;
        for(int j=178;j<fin+1;j++){
            Mat imagen;
            imagen = imread("C:/Datos Taller/"+nombre+" ("+to_string(j)+").png" );
            imshow("Display Image",imagen);
            waitKey(0);
        }
    }else if(opcion ==1){
        cout<<"si entro 1 "<<endl;
        while(op!=-1){   
            cout<<"¿Que información necesita(-1 para salir)?"<<endl;
            cout<<"[1]Persona que han entrado a la zona establecida"<<endl;
            cout<<"[2]Personas que han salido de la zona establecida"<<endl;
            cout<<"[3]Flujo de personas que ingresan por hora"<<endl;
            cout<<"[4]Flujo de personas que salen por hora"<<endl;
            cin>>op;
            if (op==1){
                cout<<"La cantidad de personas que ingresaron a la zona establecida fueron: "<<to_string(FlujoEntrada(Detectadas))<<endl;
            }else if(op==2){
                cout<<"La cantidad de personas que salieron de la zona establecida fueron: "<<to_string(FlujoSalida(Detectadas))<<endl;
            }else if(op==3){
                int horas;
                cout<<"¿Flujo de personas en cuantas horas?: "<<endl;cin>>horas;
                cout<<"El flujo de personas que ingresaron por la el tiempo establecido: "<<to_string(FlujoEntradaPorHora(Detectadas,horas))<<"personas/hora"<<endl;
            }else if(op==4){
                int horas;
                cout<<"¿Flujo de personas en cuantas horas?: "<<endl;cin>>horas;
                cout<<"El flujo de personas que salieron en el tiempo establecido: "<<to_string(FlujoSalidaPorhora(Detectadas,horas))<<" personas/hora"<<endl;
            }
            cout<<"¿Desea salir?(Presione -1)"<<endl;
            cin>>op;
        }
          cout<<"salio "<<endl;
    }

    return 0;
}