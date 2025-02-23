#include <stdio.h> 
int area_cuadrado(int lado){
    return lado*lado;
}
int perimetro_cuadrado(int lado){
    return 4*lado;
}

int main(){

    int lado;
    printf("Este programa calcula el area y perimetro de un cuadrado\n Ingrese el lado del cuadrado:\n");
    scanf("%d", &lado);
    printf("El area del cuadrado es: %d\nEl perimetro del cuadrado es:%d\n",area_cuadrado(lado),perimetro_cuadrado(lado));

    return 0;
}