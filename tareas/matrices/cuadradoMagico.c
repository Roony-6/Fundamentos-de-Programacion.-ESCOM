#include <stdio.h>

#define MAX 100  // Tamaño máximo de la matriz

// Declaración de funciones
void verificar_matriz_impar(int *n);
void llenarCuadradoMagico(int matrix[MAX][MAX], int n);
void printMatriz(int matrix[MAX][MAX], int n);

int main() {
    int n;
    
    // Verificar que n sea impar
    verificar_matriz_impar(&n);

    // Declaración de la matriz con tamaño máximo
    int matrix[MAX][MAX] = {0};  // Inicializamos la matriz en 0

    // Llenar el cuadrado mágico
    llenarCuadradoMagico(matrix, n);

    // Imprimir la matriz
    printMatriz(matrix, n);

    return 0;
}

// Función para verificar que la dimensión de la matriz sea impar
void verificar_matriz_impar(int *n) {
    do {
        printf("Introduce la dimension de la matriz (número impar): ");
        scanf("%d", n);
    } while (*n % 2 == 0);  // Repite si el número es par
}

// Función para llenar un cuadrado mágico
void llenarCuadradoMagico(int matrix[MAX][MAX], int n) {
    int f = 0, c = n / 2;  // Empezamos en la mitad de la primera fila
    matrix[f][c] = 1;  // El primer número se coloca en la posición central

    // Llenamos el cuadrado mágico
    for (int i = 2; i <= n * n; i++) {
        // Calculamos la nueva posición (subimos una fila y movemos una columna a la derecha)
        f--; c++;  // Movimiento hacia arriba y a la derecha
        if (f < 0) {  // Si la fila se pasa del límite superior
           if(c>=n){
            f+=2;c--;
           } else f = n - 1;
        }
        if (c >= n) {  // Si la columna se pasa del límite derecho
            c = 0;
        }
        if (matrix[f][c] != 0) {  // Si la casilla está ocupada
            f += 2;
            c--;  // Volver hacia abajo
        }

        // Colocamos el número en la nueva posición
        matrix[f][c] = i;
    }
}

// Función para imprimir la matriz
void printMatriz(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);  // Alineamos los números con un espacio de 3
        }
        printf("\n");
    }
}
