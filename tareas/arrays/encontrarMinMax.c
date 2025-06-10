#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Prototipos de funciones
int posicionMinimo(int [], int);         // Devuelve la posición del valor mínimo en el arreglo
int posicionMaximo(int [], int);         // Devuelve la posición del valor máximo en el arreglo
void imprimirArray(int [], int);         // Imprime todos los elementos del arreglo
void llenaArrIntAleaIter(int[],int);     // Llena el arreglo con números aleatorios (recursivo)

int main(){
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    int array[50], n;
    printf("dame la longitud del array\n");
    scanf("%d",&n);
    
    llenaArrIntAleaIter(array,n); // Llena el arreglo con números aleatorios
    imprimirArray(array,n);       // Imprime el arreglo generado

    // Imprime la posición y valor del mínimo
    printf("\nEl minimo es a[%d]=%d",posicionMinimo(array,n),array[posicionMinimo(array,n)]);
    // Imprime la posición y valor del máximo
    printf("\nEl maximo es a[%d]=%d",posicionMaximo(array,n),array[posicionMaximo(array,n)]);
}

// Función que devuelve la posición del valor máximo en el arreglo
int posicionMaximo(int array[],int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(array[max]<array[i]){
            max=i;
        }
    }
    return max;
}

// Función que devuelve la posición del valor mínimo en el arreglo
int posicionMinimo(int array[],int n){
    int min=0;
    for(int i=1;i<n;i++){
        if(array[min]>array[i]){
            min=i;
        }
    }
    return min;
}

// Función que imprime todos los elementos del arreglo
void imprimirArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}

// Función recursiva que llena el arreglo con números aleatorios entre 1 y 100
void llenaArrIntAleaIter(int array[], int n){
    if(n>=0){
        llenaArrIntAleaIter(array,n-1);      // Llama recursivamente para llenar los elementos anteriores
        array[n]=rand()%100 +1;              // Asigna un número aleatorio al elemento actual
    }
}