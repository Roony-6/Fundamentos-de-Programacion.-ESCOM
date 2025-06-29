#include <stdio.h>
#include <string.h>
//recreando funciones de la libreria string.h
int strlength(char*);
void strcopy(char*, char*);
int strconcat(char*, char*);

int main(){
   

    return 0;
}

int strlength(char* cadena){
    int i=0;
    while(cadena[i]!='\0'){
        i++;
    }
    return i;
}

int strconc

//Funcion que recibe un arreglo de numeros enteros y la longitud del arreglo y despues imprima la suma de todos los elementos del arreglo

void suma_total(int array[],int n){
    int i, sumaacumulada = 0;
    for(i=0; i<n; i++){
        sumaacumulada += array[i];
    }
    printf("La suma total es: %d\n", sumaacumulada);
}