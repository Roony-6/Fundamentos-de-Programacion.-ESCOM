#include <stdio.h>

int main() {
    // Arreglo unidimensional
    int numeros[5] = {10, 20, 30, 40, 50};  // Declaración e inicialización
    printf("Elementos del arreglo unidimensional:\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    // Modificación de un elemento en el arreglo
    numeros[2] = 35;  // Cambiar el valor de la posición 2
    printf("\nDespués de modificar un elemento del arreglo:\n");
    printf("numeros[2] = %d\n", numeros[2]);

    // Arreglo bidimensional (matriz 2x3)
    int matriz[2][3] = { {1, 2, 3}, {4, 5, 6} };
    printf("\nElementos de la matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Arreglo tridimensional (matriz 2x2x3)
    int matriz3D[2][2][3] = { 
        {{1, 2, 3}, {4, 5, 6}}, 
        {{7, 8, 9}, {10, 11, 12}}
    };
    printf("\nElementos de la matriz 3D 2x2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", matriz3D[i][j][k]);
            }
            printf("\n");
        }
    }

    // Cadena de caracteres (arreglo de char)
    char nombre[] = "Hola";  // También se puede usar como un arreglo de caracteres
    printf("\nCadena: %s\n", nombre);

    // Uso de sizeof para obtener tamaño del arreglo
    printf("\nTamaño de arreglo 'numeros': %lu\n", sizeof(numeros) / sizeof(numeros[0]));
    printf("Tamaño de la matriz 'matriz': %lu\n", sizeof(matriz) / sizeof(matriz[0][0]));

    // Uso de punteros con arreglos
    int *ptr = numeros;
    printf("\nUsando punteros para acceder a los elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, *(ptr + i));  // Acceso a través de punteros
    }

    return 0;
}
