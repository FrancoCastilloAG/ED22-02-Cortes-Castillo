# ED22-02-Cortes-Castillo
![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección y reidentificación de caras en secuencias de imágenes o video

**Alumnos:**

* Claudio Cortés Mondaca (Coordinador)
* Franco Castillo Astorga ()

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

Esbozo de la solución propuesta, se espera que esta vaya evolucionando a medida que se avanza en el proyecto.

## 2. Materiales y métodos


### 2.1 Instalación

Describir brevemente las librerías utilizadas para la instalación y programas utilizados para la ejecución del código. (Agregar una sección de anexo para describir como fueron instaladas las librerías de OpenCV y la IDE utilzada para el trabajo)

### 2.2 Diseño 

Explicar los componentes (módulos o clases) utilizados para resolver el problema. Indicar arquitectura propuesta, diagrama de clases u otro artefacto que estime conveniente para explicar el diseño de su implimentación.

### 2.3 Implementación

Explicar brevemente algunos aspectos de implementación: Por ejemplo, detector de caras utilizado. Se pueden realizar pequeñas reseñas al código para indicar elementos importantes en el trabajo.

Por ejemplo, 

#### Detector de caras

El detector de caras utilizado fue xxx. Para utilizarlo se debe.... El código para detectar una cara en una imagen se muestra a continuación:

```c++
 1. faceCascadePath = "./haarcascade_frontalface_default.xml";
 2. faceCascade.load( faceCascadePath )
 3. std::vector<Rect> faces;
 4. faceCascade.detectMultiScale(frameGray, faces);

 5. for ( size_t i = 0; i < faces.size(); i++ )
 6. {
 7.  int x1 = faces[i].x;
 8.  int y1 = faces[i].y;
 9.  int x2 = faces[i].x + faces[i].width;
10.  int y2 = faces[i].y + faces[i].height;
11. }
```
La primera linea carga el archivo de entrenamiento... etc

## 3. Resultados obtenidos
Dentro de los avances del taller hasta este momento, los resultados obtenidos son los esperados, gracias a la correcta organización y coordinación entre compañeros.

## 4. Conclusiones
Como conclusión con respecto a este taller se puede decir que gracias a este nuevo reto en el que debemos utilizar una nueva librería y un nuevo lenguaje de programación, formará y será una parte fundamental para el desarrollo a futuro de el desarrollo del estudiante, ya que con estas nuevas herramientas se logrará ser un profesional más completo y adaptable.

# Anexos

## Anexo A: Instalación librerías OpenCV

## Anexo B: Instalación de IDE y configuración librerías OpenCV

# Referecia

Indicar los libros, páginas web, documentos, etc. Utilizados en el trabajo. Por ejemplo:

1. MONTERO, J.,Metodos matemáticos aplicados a la ganadería.3aed. Sevilla: Ediciones de la pradera,2007.
2. LVARADO,   J.   P.,¿Qué   debe   contener   un   artículo   científico?.http://www.ie.tec.ac.cr/palvarado/pmwiki/index.php/MSc/Art\%c3\%adculoCient\%c3\%adfico. Fe-cha de acceso:13/Nov/2018

