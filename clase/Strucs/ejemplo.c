#include<stdio.h>
 typedef struct Pesona {
    char nombre[20];
    char apellidoP[20];
    char apellidoM[20];
    int edad;
    float promedio;
} Persona;

int main() {
    Persona Alumnos[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Ingrese el nombre, apellido paterno, apellido materno, edad y promedio del alumno %d:\n", i + 1);
        scanf("%s %s %s %d %f", Alumnos[i].nombre, Alumnos[i].apellidoP, Alumnos[i].apellidoM, &Alumnos[i].edad, &Alumnos[i].promedio);
    }
    for(int i = 0; i < 5; i++) {
        printf("Alumno %d: Nombre: %s %s %s, Edad: %d, Promedio: %.2f\n", 
               i + 1, Alumnos[i].nombre, Alumnos[i].apellidoP, Alumnos[i].apellidoM, 
               Alumnos[i].edad, Alumnos[i].promedio);
    }
}