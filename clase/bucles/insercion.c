#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Prototipos de funciones
void ordenarInsercion(int [],int);      // Ordena un arreglo usando el método de inserción
void intercambia(int *, int *);         // Intercambia dos valores enteros
void LlenaArrIntAleaIter(int[],int);   // Llena un arreglo con números aleatorios
void ImpArrInt(int[],int);              // Imprime los elementos de un arreglo

int main(){
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    int array[100], n;
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    LlenaArrIntAleaIter(array, n); // Llena el arreglo con valores aleatorios
    ImpArrInt(array, n);           // Imprime el arreglo original
    ordenarInsercion(array, n);    // Ordena el arreglo por inserción
    ImpArrInt(array, n);           // Imprime el arreglo ordenado

    return 0;
}

void ordenarInsercion(int array[], int n){
    int i = 1, j;
    while (i < n) {
        j = i;
        // Desplaza el elemento hacia la izquierda hasta que esté en la posición correcta
        while (j > 0 && array[j] < array[j-1]) {
            intercambia(array + j, array + j - 1);
            j--;
        }   
        i++;
    }
}

void intercambia(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void ImpArrInt(int a[], int n){
    int i;
    for(i = 0; i < n; i++)
        printf("a[%d]=%d\t", i, a[i]);
    putchar('\n');
}

void LlenaArrIntAleaIter(int a[], int n){
    int i;
    for(i = 0; i < n; i++)
        a[i] = 1 + rand() % 100;
}