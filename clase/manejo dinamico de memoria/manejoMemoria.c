#include <stdio.h>
#include <stdlib.h>

int* crearArreglo(int n);
void llenarArreglo(int *arr, int n);
void imprimirArreglo(int *arr, int n);

int main() {
    int n;
    printf("¿Cuantos numeros quieres guardar? ");
    scanf("%d", &n);

    int *arr = crearArreglo(n);
    if (arr == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    llenarArreglo(arr, n);
    imprimirArreglo(arr, n);

    free(arr);
    return 0;
}

int* crearArreglo(int n) {
    return (int*)malloc(n * sizeof(int));
}

void llenarArreglo(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void imprimirArreglo(int *arr, int n) {
    printf("Los numeros ingresados son:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}