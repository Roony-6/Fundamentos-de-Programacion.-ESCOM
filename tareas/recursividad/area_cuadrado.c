#include <stdio.h> 
int area_cuadrado(int lado){
    return lado*lado;
}//funtion to calculate the area of a square
int perimetro_cuadrado(int lado){
    return 4*lado;
}//funcion to ccalculate the perimeter of a square

int main(){//principal funtion

    int lado; //declaration of the variable
    printf("Este programa calcula el area y perimetro de un cuadrado\n Ingrese el lado del cuadrado:\n");
    scanf("%d", &lado);//reading the value of the side of the square
    printf("El area del cuadrado es: %d\nEl perimetro del cuadrado es:%d\n",area_cuadrado(lado),perimetro_cuadrado(lado));//printing the area n perimeter


    return 0;//end 
}