# Sistema Comparativo de Métodos de Ordenamiento en C++ 📊

Este proyecto es el Trabajo Integrador Final para la materia **Algoritmos y Estructuras de Datos** de la Universidad Tecnológica Nacional (UTN - FRT). 

Consiste en una aplicación de consola desarrollada en **C++** que permite a través de un menú interactivo ejecutar, comparar y analizar la eficiencia de distintos algoritmos de ordenamiento de datos utilizando vectores.

## 🚀 Algoritmos Implementados
* **Bubble Sort:** Ideal para listas pequeñas; destaca por su estabilidad.
* **Selection Sort:** Método sencillo de selección de mínimos, útil para bajo consumo de memoria.
* **Insertion Sort:** Excelente rendimiento en listas parcial o casi ordenadas.
* **Quick Sort:** Algoritmo de "divide y vencerás", el más eficiente para procesar grandes volúmenes de datos.
* **Merge Sort:** Rendimiento predecible y estable mediante división y fusión.

## 🧠 Conclusiones del Análisis
Como parte del proyecto, realizamos un informe técnico (adjunto en formato PDF) analizando el rendimiento de cada algoritmo. Algunas conclusiones clave:
* Para conjuntos de datos masivos (ej. bases de datos), **Quick Sort** demostró ser inmensamente superior en velocidad.
* En escenarios donde la **estabilidad** de los datos originales es requerida (mantener el orden de elementos iguales), algoritmos como **Bubble Sort** o **Merge Sort** son la opción correcta frente a Selection o Quick Sort.
* La elección del algoritmo depende de los recursos de memoria y el tamaño de la colección de datos.

## 🛠️ Tecnologías
* C++
* Estructuras de Datos (Vectores)
* Lógica Algorítmica
