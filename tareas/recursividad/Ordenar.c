#include<stdio.h>
#include<stdlib.h>

//Este programa funciona solo con funciones recursivas
int generarNumeroAleatorio(int);
void ordenarArray(int []);
void llenarArrayAleatorio(int [],int);
void imprimirArray(int[],int);



int main(){

    srand(time(NULL)); // Inicializa la semilla con el tiempo actual
    int array[100], n;
    printf("Dame la longitud del array:\n");
    scanf("%d",&n);
    llenarArrayAleatorio(array,n);
    imprimirArray(array,n);
    //ordenarArray(array);
}

int generarNumeroAleatorio(int rango){
    return rand()%100 +1;
}
void llenarArrayAleatorio(int array[],int n){
    if(n>=0){
        llenarArrayAleatorio(array,n-1);
        array[n]=generarNumeroAleatorio(100);
    }
}

void imprimirArray(int array[],int n){
    if(n>=0){
        imprimirArray(array,n-1);
        printf("%d ",array[n]);
    }
}

void ordenarArray(int array[]){

    
}