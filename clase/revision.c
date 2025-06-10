#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef int Entero;
typedef float Real;
typedef char* Cadena;

// Definición de la estructura Empleado
typedef struct {
    Cadena nombre;
    Entero edad;
    Real salario;
} Empleado;

int main(){
    Empleado ventas[100];
    FILE *archivo = fopen("empleados.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Lee 5 empleados del archivo
    for(int i = 0; i < 5; i++){
        ventas[i].nombre = (Cadena)malloc(50 * sizeof(char));
        if (ventas[i].nombre == NULL) {
            printf("No se pudo asignar memoria.\n");
            // Libera la memoria ya reservada antes de salir
            for(int j = 0; j < i; j++) free(ventas[j].nombre);
            fclose(archivo);
            return 1;
        }
        if (fscanf(archivo, "%49s %d %f", ventas[i].nombre, &ventas[i].edad, &ventas[i].salario) != 3) {
            printf("Error al leer datos del archivo.\n");
            free(ventas[i].nombre);
            // Libera la memoria ya reservada antes de salir
            for(int j = 0; j < i; j++) free(ventas[j].nombre);
            fclose(archivo);
            return 1;
        }
    }

    // Imprime los datos de los empleados leídos
    for(int i = 0; i < 5; i++){
        printf("%s tiene %d años y un salario de %.2f\n", ventas[i].nombre, ventas[i].edad, ventas[i].salario);
    }

    fclose(archivo);

    // Ejemplo de uso de la estructura Empleado
    Empleado empleado1;
    printf("%lu\n", sizeof(Empleado)); // Imprime el tamaño de la estructura Empleado

    empleado1.nombre = (Cadena)malloc(50 * sizeof(char));
    if (empleado1.nombre == NULL) {
        printf("No se pudo asignar memoria para empleado1.\n");
        for(int i = 0; i < 5; i++) free(ventas[i].nombre);
        return 1;
    }
    strcpy(empleado1.nombre, "Roony_Roldan");
    empleado1.edad = 19;
    empleado1.salario = 6;

    printf("Nombre: %s\n", empleado1.nombre);
    printf("Edad: %d\n", empleado1.edad);
    printf("Salario: %.2f\n", empleado1.salario);

    // Libera la memoria reservada para los nombres
    for(int i = 0; i < 5; i++){
        free(ventas[i].nombre);
    }
    free(empleado1.nombre);

    return 0;
}