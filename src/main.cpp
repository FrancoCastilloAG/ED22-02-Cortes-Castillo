#include <opencv2/objdetect.hpp>

#include "logic/includes/Detector.h"
#include "logic/includes/Persona.h"

using namespace cv;
using namespace std;

<<<<<<< Updated upstream
int main(int argc, char** argv){
    Detector detector;
    Mat imagen = imread("C:/Users/franc/OneDrive/Escritorio/personas.jpg");

    vector<Persona> found = detector.detect(imagen);
    for (vector<Persona>::iterator i = found.begin(); i != found.end(); ++i){
        Persona &p = *i;
        rectangle(imagen, Point(p.getXComienzo(), p.getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 255, 0), 2);
        circle(imagen, Point(p.getXCentro(), p.getYCentro()), 3, Scalar(0, 0, 255), 3);
    }
    imshow("ventana", imagen);
    waitKey(0);
=======

    /*
    int main(int argc, char** argv){
    ListaPersonas Listap;
    Detector detector;
    Mat imagen = imread("C:/Users/franc/OneDrive/Escritorio/personas.jpg");
    vector<Persona> found = detector.detect(imagen,Listap);
    imshow("ventana", imagen);
    waitKey(0);
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
void ReconocerPersonas(){
    int fin=214;
    string nombre="Captura de pantalla";
    for(int i=178;i<fin+1;i++){
        Detector detector;
        Mat imagen;
        imagen = imread("C:/Datos Taller/"+nombre+" ("+to_string(i)+").png" );
        detector.toggleMode();
        Point p1(0, 384),p2(1366, 384);//line point´s
        int thickness = 2; //weith line
        line(imagen, p1, p2, Scalar(255, 0, 0),thickness, LINE_8); //draw a line between p1 and p2
        vector<Persona> found = detector.detect(imagen);
        for (vector<Persona>::iterator i = found.begin(); i != found.end(); ++i) {
            Persona &p = *i;
            cout << "(" << p.getXComienzo() << ", " << p.getYComienzo() << ")" << endl;
            //detector.adjustRect(p);
            rectangle(imagen, Point(p.getXComienzo(), p.getYComienzo()), Point(p.getXFin(), p.getYFin()), Scalar(0, 0, 255), 2);
            circle(imagen,Point(p.getXCentro(), p.getYCentro()), 3,Scalar(0, 0, 255), 3);
            circle(imagen,Point(p.getXComienzo(), p.getYComienzo()), 3,Scalar(255, 0, 255), 2);
            circle(imagen,Point(p.getXFin(), p.getYFin()), 3,Scalar(0, 255, 255), 2);
    }
    imshow("People detector", imagen);
    waitKey(0);
   }
   
}
int FlujoEntrada(ListaPersonas* entrantes){
    return entrantes->getSize();
}
int FlujoSalida(ListaPersonas* salientes){
    return salientes->getSize();
}
double FlujoEntradaPorHora(ListaPersonas* entrantes,int horas){
    double valor=(entrantes->getSize())/horas;
    return valor;
}
double FlujoSalidaPorhora(ListaPersonas* salientes, int horas){
    double valor=(salientes->getSize())/horas;
    return valor;
}
void showList(ListaPersonas* lista){
    NodoPersona* crrt=lista->getFirst();
    if(crrt==nullptr) return ;
    while(crrt!=nullptr){
        cout<<crrt->getPersona()->getId()<<endl;
        //cout
        crrt=crrt->getNext();
    }

}
int main(int argc, char** argv)
{
    cout<<"Hello world!"<<endl;
    ListaPersonas* entrantes= new ListaPersonas();
    ListaPersonas* salientes= new ListaPersonas();  
    //menu
    int opcion=-1;
    int op=-2;
    cout<<"Hola Bienvenido al menú"<<endl;
    cout<<"¿Desea entrar como administrador[0] o como guardia[1]?"<<endl; cin>>opcion;
    if(opcion==0){
        cout<<" entro0"<<endl;
        
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
                cout<<"entró 1"<<endl;
                //FlujoEntrada(entrantes);
            }else if(op==2){
                cout<<"entró 2"<<endl;
                //FlujoSalida(salientes);
            }else if(op==3){
                cout<<"entró 3"<<endl;
                //FlujoEntradaPorHora(entrantes);
            }else if(op==4){
                cout<<"entró 4"<<endl;
                //FlujoSalidaPorhora(salientes);
            }
            cout<<"¿Desea salir?(Presione -1)"<<endl;
            cin>>op;
        }
          cout<<"salio "<<endl;
    }

    //ReconocerPersonas();

>>>>>>> Stashed changes
    return 0;
}