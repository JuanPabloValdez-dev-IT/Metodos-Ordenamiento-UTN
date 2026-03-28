
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para medir tiempo

int comp = 0; // Contador global de comparaciones
int inter = 0; // Contador global de intercambios

void cargar(int v[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Ingrese valor en la posicion %d: ", i);
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void burbuja(int v[], int n) {
    int i, j, aux;
    comp = 0;
    inter = 0;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            comp++;
            if(v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                inter++;
            }
        }
    }
}

void seleccion(int v[], int n) {
    int i, j, min, aux;
    comp = 0;
    inter = 0;
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            comp++;
            if(v[j] < v[min]) {
                min = j;
            }
        }
        if(min != i) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
            inter++;
        }
    }
}

void quicksort(int v[], int primero, int ultimo) {
    int i = primero;
    int j = ultimo;
    int medio = v[(primero + ultimo) / 2];
    int aux;

    while(i <= j) {
        while(v[i] < medio) {
            i++;
            comp++;
        }
        while(v[j] > medio) {
            j--;
            comp++;
        }
        comp++;
        if(i <= j) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            inter++;
            i++;
            j--;
        }
    }

    if(primero < j) {
        quicksort(v, primero, j);
    }
    if(i < ultimo) {
        quicksort(v, i, ultimo);
    }
}

// Función para medir tiempo de Burbuja
void ejecutarBurbuja(int v[], int n) {
    int temp[100]; // Copia del vector
    int i;
    for(i = 0; i < n; i++) {
        temp[i] = v[i];
    }
    clock_t inicio = clock(); // Iniciar medición
    burbuja(temp, n);
    clock_t fin = clock(); // Finalizar medición
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\tMETODO BURBUJA\n");
    printf("VECTOR ORDENADO:\n");
    mostrar(temp, n);
    printf("Comparaciones: %d\n", comp);
    printf("Intercambios: %d\n", inter);
    printf("Tiempo: %.6f segundos\n", tiempo);
}

// Función para medir tiempo de Selección
void ejecutarSeleccion(int v[], int n) {
    int temp[100]; // Copia del vector
    int i;
    for(i = 0; i < n; i++) {
        temp[i] = v[i];
    }
    clock_t inicio = clock(); // Iniciar medición
    seleccion(temp, n);
    clock_t fin = clock(); // Finalizar medición
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\tMETODO SELECCION\n");
    printf("VECTOR ORDENADO:\n");
    mostrar(temp, n);
    printf("Comparaciones: %d\n", comp);
    printf("Intercambios: %d\n", inter);
    printf("Tiempo: %.6f segundos\n", tiempo);
}

// Función para medir tiempo de QuickSort
void ejecutarQuickSort(int v[], int n) {
    int temp[100]; // Copia del vector
    int i;
    for(i = 0; i < n; i++) {
        temp[i] = v[i];
    }
    comp = 0; // Reiniciar contadores
    inter = 0;
    clock_t inicio = clock(); // Iniciar medición
    quicksort(temp, 0, n - 1);
    clock_t fin = clock(); // Finalizar medición
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\tMETODO QUICKSORT\n");
    printf("VECTOR ORDENADO:\n");
    mostrar(temp, n);
    printf("Comparaciones: %d\n", comp);
    printf("Intercambios: %d\n", inter);
    printf("Tiempo: %.6f segundos\n", tiempo);
}

	int  main() {
    int vec[100];
    int n, op;

    printf("Ingrese cantidad de elementos: ");
    scanf("%d", &n);

    cargar(vec, n);
    printf("Vector original:\n");
    mostrar(vec, n);
    system("cls");
    
    do {
        printf("\nMENU DE ORDENAMIENTO\n");
        printf("1 - Metodo Burbuja\n");
        printf("2 - Metodo Seleccion\n");
        printf("3 - Metodo QuickSort\n");
        printf("4 - Mostrar vector\n");
        printf("5 - Cargar nuevo vector\n");
        printf("0 - Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &op);
        system("cls");

        switch(op) {
            case 1:
                ejecutarBurbuja(vec, n);
                break;
            case 2:
                ejecutarSeleccion(vec, n);
                break;
            case 3:
                ejecutarQuickSort(vec, n);
                break;
            case 4:
                printf("\tVECTOR ORIGINAL:\n");
                mostrar(vec, n);
                break;
            case 5:
                printf("\tCARGAR NUEVO VECTOR:\n");
                cargar(vec, n);
                break;
            case 0:
                printf("Fin del programa.\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
        system("pause");
    } while(op != 0);
}
