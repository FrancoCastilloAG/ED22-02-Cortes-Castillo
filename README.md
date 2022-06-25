# ED22-02-Cortes-Castillo
![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección y reidentificación de caras en secuencias de imágenes o video

**Alumnos:**

* Claudio Cortés Mondaca (Coordinador)
* Franco Castillo Astorga (Implementador)

## Resumen 

>De las primeras tareas de este taller es comienza con la instalación de la librería OpenCV al IDE (Visual Studio Code), la cual permitiría manejar las imágenes y video correspondientes al taller. Ya instalada la librería, se comienza con la tarea de utilizar esta, de partida se utilizará para abrir una imagen y lograr hacer la correcta detección de personas dentro de la imagen. 
Teniendo en cuenta la detección, se comienza con la segunda parte,la implementación de los requerimientos, se implementa la clase persona y al nodoPersona, luego de esto se construye la clase de la linkedlist la cual es implementada como lista enlazada simple, donde se podrán almacenar las personas que serán detectadas en las imágenes gracias a la librería.
Con respecto a los resultados, se logran obtener las detecciones correspondientes, además hay una correcta implementación del cálculo de zonas de detección, sin embargo, se esperan mejorar resultados con respecto a la clase persona.

## 1. Introducción

La primera función de un reporte técnico es plasmar la información necesaria para que otras personas puedan reproducir el sistema propuesto o puedan entender su fucnionamiento . Para cumplir anterior se debe diferenciar claramente entre los artefactos de diseño e implementación. En el caso de un desarrollo tecnológico los algoritmos son importantes como componente de diseño y los programas generalmente son irrelevantes y deben resumidos o agregados en anexos en el documento. Los programas no son importantes en el documento, salvo si se quiere explicar conceptos expecíficos del lenguaje o del algoritmo implementado.

La redacción debe ser formal y de modo impersonal. No se debe utlizar primera persona del singular o plural. Se debe evitar el uso de cualquier calificativo sustituyéndolo siempre utilizando datos concretos y rastreables en documentos o publicaciones a través de referencias bibliográficas. Por ejemplo, no calificar algo como: "muy importante", "sustancial", "muy usadoo" o "mucho mejor".

Las comparaciones deben concretarse con hechos y datos, sin frases ambiguas o términos generales. Por ejemplo, nunca se debe redactar frases como "el método es mejor que el método B". Lo correcto es decir, el error promedio de el método A es de 5 %, correspondiendo a la mitad del error de 10% obtenido utilizando el método B". El tiempo verbal es usualmente presente. No se debe perder de vista que se está explicando ”como hacer algo”, en vez de ”qué se hizo”. Todo aspecto circunstancial es irrelevante para el documento. Por ejemplo, si se ha desarrollado en el laboratorio X, o en el curso Y, con el profesor Z, etc.

### 1.1 Descripción del problema

Con respecto a la descripción del problema se debe ser capaz de hacer uso de los conocimiento aprendidos en clases, y esto acompañado de la correcta utilización de la librería OpenCV se debe llegar a cumplir con los requerimiento que son pedidos.

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

La mayoria del trabajo de implementacion esta hecho ya que logramos identificar las personas tanto en video como en imagenes. 

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
Dentro de los avances del taller hasta este momento, los resultados obtenidos son los esperados, gracias a la correcta organización y coordinación entre compañeros.

## 4. Conclusiones
Como conclusión con respecto a este taller se puede decir que gracias a este nuevo reto en el que debemos utilizar una nueva librería y un nuevo lenguaje de programación, formará y será una parte fundamental para el desarrollo a futuro de el desarrollo del estudiante, ya que con estas nuevas herramientas se logrará ser un profesional más completo y adaptable.

# Anexos

## Anexo A y B Instalación de IDE,Instalación librerías OpenCV y configuración librerías OpenCV

Para la instalación del IDE y configuración e instalación de openCV seguimos la primera ayudantía de nuestro ayudante Cristian galleguillos la cual esta en la plataforma adjunto link https://drive.google.com/drive/folders/1MTik-UAPAi0MgkdM-O9t6s_wD9JSVolE

# Referecia

Indicar los libros, páginas web, documentos, etc. Utilizados en el trabajo. Por ejemplo:

1. MONTERO, J.,Metodos matemáticos aplicados a la ganadería.3aed. Sevilla: Ediciones de la pradera,2007.
2. LVARADO,   J.   P.,¿Qué   debe   contener   un   artículo   científico?.http://www.ie.tec.ac.cr/palvarado/pmwiki/index.php/MSc/Art\%c3\%adculoCient\%c3\%adfico. Fe-cha de acceso:13/Nov/2018

