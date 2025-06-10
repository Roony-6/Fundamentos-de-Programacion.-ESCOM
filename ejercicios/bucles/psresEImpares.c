#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Prototipos de funciones
void llenaArrIntAleaIter(int[],int); // Llena un arreglo con números aleatorios
void impArrInt(int[],int);           // Imprime el arreglo
void paresImpares(int[],int);        // Imprime pares e impares por separado

// Función principal
int main(){
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    int array[100], n;
    printf("dame la long del array: ");
    scanf("%d",&n); // Lee el tamaño del arreglo
    llenaArrIntAleaIter(array, n); // Llena el arreglo con valores aleatorios
    impArrInt(array, n);           // Imprime el arreglo completo
    paresImpares(array, n);        // Imprime los pares e impares por separado

    return 0;
}

// Función que imprime los números pares e impares de un arreglo
void paresImpares(int array[], int n){
    printf("pares:\n");
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            printf("%d ", array[i]);
        }
    }
    printf("\nimpares:\n");
    for(int i = 0; i < n; i++){
        if(array[i] % 2 != 0){
            printf("%d  ", array[i]);
        }
    }
    printf("\n");
}

// Función que imprime todos los elementos de un arreglo
void impArrInt(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("a[%d]=%d\t", i, a[i]);
    putchar('\n');
}

// Función que llena un arreglo con números aleatorios entre 1 y 100
void llenaArrIntAleaIter(int a[], int n){
    for(int i = 0; i < n; i++)
        a[i] = 1 + rand() % 100;
}