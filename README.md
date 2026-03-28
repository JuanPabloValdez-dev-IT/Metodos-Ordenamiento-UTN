# Sistema Comparativo de Métodos de Ordenamiento en C++ 📊

Este proyecto es parte del Trabajo Integrador Final para la materia **Algoritmos y Estructuras de Datos** de la Universidad Tecnológica Nacional (UTN - FRT). 

Consiste en una aplicación de consola con un menú interactivo desarrollada en **C/C++** que permite ejecutar, evaluar y comparar el rendimiento empírico de distintos algoritmos de ordenamiento utilizando vectores estáticos.

## 🚀 Algoritmos Implementados
* **Bubble Sort (Burbuja):** Algoritmo de intercambio simple, ideal para demostrar la base lógica del ordenamiento.
* **Selection Sort (Selección):** Método de búsqueda de mínimos sucesivos.
* **Quick Sort:** Algoritmo avanzado de "divide y vencerás", altamente eficiente para procesar datos a gran velocidad.

## ⏱️ Funcionalidad Destacada: Benchmarking y Testing
Para evaluar la complejidad y eficiencia de cada método, el sistema incluye métricas en tiempo real:
* **Medición de Tiempo:** Utiliza la librería `<time.h>` para calcular el tiempo de ejecución exacto en segundos.
* **Contadores de Complejidad:** El programa rastrea y muestra en pantalla la cantidad exacta de **comparaciones** y de **intercambios** (swaps) que requiere cada algoritmo para ordenar el mismo conjunto de datos.
* **Preservación de Datos:** El sistema realiza copias en memoria del vector original desordenado para garantizar que todos los algoritmos se prueben bajo las mismas condiciones.

## 🧠 Conclusiones del Análisis
Como parte del proyecto, se elaboró un informe técnico analizando el rendimiento:
* Para conjuntos de datos grandes, **Quick Sort** demostró ser inmensamente superior en velocidad y menor cantidad de comparaciones.
* Algoritmos como **Bubble Sort** y **Selection Sort**, si bien son fáciles de implementar, muestran un aumento exponencial en la cantidad de intercambios necesarios a medida que crece el vector, volviéndolos ineficientes para bases de datos reales.

## 🛠️ Tecnologías
* C / C++
* Estructuras de Datos (Vectores)
* Lógica Algorítmica y Benchmarking
