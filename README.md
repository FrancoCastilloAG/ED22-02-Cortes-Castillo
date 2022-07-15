![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección y reidentificación de caras en secuencias de imágenes o video

**Alumnos:**

* Claudio Cortés Mondaca (Coordinador)
* Franco Castillo Astorga (Implementador)

## Resumen 

>De las primeras tareas de este taller es comienza con la instalación de la librería OpenCV al IDE (Visual Studio Code), la cual permitiría manejar las imágenes y video correspondientes al taller. Ya instalada la librería, se comienza con la tarea de utilizar esta, de partida se utilizará para abrir una imagen y lograr hacer la correcta detección de personas dentro de la imagen. 
Teniendo en cuenta la detección, se comienza con la segunda parte,la implementación de los requerimientos, se implementa la clase persona y al nodoPersona, luego de esto se construye la clase de la linkedlist la cual es implementada como lista enlazada simple donde se podrán almacenar las personas,esta linkedlist se utilizara para cumplir cada uno de los requerimientos de manera optimizada.
Con respecto a los resultados, se lograron obtener las detecciones correspondientes, además hay una correcta implementación del cálculo de zonas de deteccion y se logro con eficacia cumplir los requerimientos dados por el profesor con la ayuda de un codigo bien estructurado y ordenado.

## 1. Introducción

Para el desarrollo de este taller necesitaremos distintos tipos de conocimientos en programación tales como la orientacion a objetos y estructura de datos,se hara uso de la modularizacion de clases acompaña de TDAs como las linkedlist para establecer una estructura de codigo mas universal,se empleara la IDE Visual Studio Code en la cual se ejecutara la librería OpenCV que aporta grandes herramientas para el reconocimiento y seguimiento de objetos en video o imagen.
El taller imparte detectar personas a la salida y entrada de un establecimiento,dada esa detección se pide implementar los diferentes requerimientos que el usuario solicita,en este caso la solucion final es un 80% mas eficiente que la primera entrega de este taller debido a el tipo de deteccion utilizada lo cual agilizo la implementeacion de los distintos requerimientos.
De parte de los estudiantes se logro implementar de manera correcta los requerimientos del taller por lo cual se ha finalizado con exito y de la manera mas optima posible.

### 1.1 Descripción del problema

La problematica dada esta en saber la trazabilidad de un recinto empleando el software desarrollado ya que con ella podra contabilizar las personas que entran y salen,debido a esto se podra plasmar una serie de estadisticas a lo largo del tiempo.

### 1.2 Objetivos 

**Objetivo General**

El objetivo general es construir un sistema independiente, que trabaje de manera eficiente y eficaz, que sea capaz de detectar personas diferentes que circulan por un espacio enfrente de una cámara de seguridad.

**Objetivos específicos**

1. Indagar de manera exhaustiva la mejor implementación de código, de tal manera que sea un código con fácil debugging. 
2. Implementar los métodos seleccionados utilizando el lenguaje de programación C++ y las librerías suministradas por OpenCV.
3. Tener una buena recepción a una retroalimentación por parte de terceros ante errores dentro del taller.

### 1.3 Solución propuesta

Las personas tendrán un centroide asociado y estarán dispuestos en 2 areas enumeradas  1 y 2,si la persona camina del área 1 al área 2 se dira que esta entrando y si pasa del área 2 a el área 1 significa que esta saliendo.

## 2. Materiales y métodos

La implementacion del software ya esta completa,logramos identificar las personas tanto en video como en imagenes. 

### 2.1 Instalación

Las librerias utilizadas fueron OpenCV en la cual utilizamos una sublibreria llamada HOG(histograma de gradientes oridentado) todo esto lo ejecutamos en la IDE de desarrollo visual studio code.

### 2.2 Diseño 

La implementación de la solución consta de un detector de personas HOG(histograma de gradientes orientados) el cual identificara la personas y le asignara un nodo el cual estará en una lista enlazada junto a otros nodos de personas. Las personas tendrán un identificador, contador propio de entrada y salida además de una locación dentro del video la cual llamaremos centroide , además tendremos 2 áreas enumeradas con 1 y 2. 

### 2.3 Implementación 

#### Detector de personas

El detector de personas es un histograma de gradientes orientado(HOG).para utilizarlo se le debe entregar un elemento de tipo Mat el cual será analizado por el HOG:

```c++
1.//en el main    
2.Detector detector;
3.    Mat imagen = imread("C:/Users/franc/OneDrive/Escritorio/personas.jpg");
4.    vector<Persona> found = detector.detect(imagen,Listap):
//en la clase detector
5.vector<Persona> Detector::detect(InputArray img){
6.vector<Rect> found;
7.     if (m == Default)
8.        hog.detectMultiScale(img, found, 0, Size(2,2), Size(4,4), 1.05, 2, false);
9.     else if (m == Daimler)
10.       hog_d.detectMultiScale(img, found, 1, Size(2,2), Size(4,4), 1.05, 3, true);
11. }
```
En el main se le entrega el Mat a traves de la llamada de una funcion contenida en la clase detector en este caso se utiliza el detector del tipo default(con el valor final false) ya que se obtuvo una mejora en los resultados de apoximadamente el 80% depende de la configuracion del HOG.

## 3. Resultados obtenidos
El software ya esta completo cumple con todos los requerimientos,de una manera eficaz y optimizada.

## 4. Conclusiones

Finalizando,el taller ha sido muy productivo ya que nos dio matices de como es el trabajo de un programador en la realidad y que no es facil cumplir con los requerimientos pedidos por el empleador pero con esfuerzo y dedicacion se logra un software muy completo y versatil que puede ser usado en diferentes ocasiones.

Respecto a el desarrollo personal de los integrantes se pudo obtener una buena forma de trabajo en equipo en el cual se destacaron las habilidades de cada uno durante la realizacion del taller y nos brindo la sabiduria de un nuevo lenguaje y una nueva libreria que nos servira para el futuro laboral que es altamente competitivo.

# Anexos

## Anexo A y B Instalación de IDE,Instalación librerías OpenCV y configuración librerías OpenCV

Para la instalación del IDE y configuración e instalación de openCV seguimos la primera ayudantía de nuestro ayudante Cristian galleguillos la cual esta en la plataforma adjunto link https://drive.google.com/drive/folders/1MTik-UAPAi0MgkdM-O9t6s_wD9JSVolE

# Referecia
1.https://stackoverflow.com/
2.Murtaza's workshop.LEARN OPENCV C++ in 4 HOURS | Including 3x Projects | Computer Vision.https://www.youtube.com/watch?v=2FYm3GOonhk
3.https://pyimagesearch.com/2018/08/13/opencv-people-counter/
4.tochiVision.[OpenCV/C++ Tutorial] People Detection Using Histogram of Oriented Gradients (HOG).https://www.youtube.com/watch?v=cvGEWBO0Vho
