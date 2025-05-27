#include<stdio.h>
//En c, un struct es tipo de dato que permite agrupar diferentes tipos de datos bajo un mismo nombre.
int main(){
    struct struc1
    {
        char nombre[20];
        char apellidoP[20];
        char apellidoM[20];
        int edad;
        float promedio;
    } alumno1, amlumno2;
    printf("Cual es tu nombre, apellidos paterno y materno, edad y promedio?\n");
    scanf("%s%s%s%d%f",alumno1.nombre,alumno1.apellidoP,alumno1.apellidoM,&alumno1.edad,&alumno1.promedio);
    printf("Tu nombre es %s %s %s, tienes %d anios y tu promedio es %.2f\n", alumno1.nombre, alumno1.apellidoP, alumno1.apellidoM, alumno1.edad, alumno1.promedio);
    
    
}