#include<stdio.h>

// Prototipo de la función que llena la matriz en forma de caracol
void caracol(int [][500], int);

// Función principal
int main(){
    // Declaración de la matriz y la variable para el tamaño
    int matriz[500][500] = {0}; // Matriz inicializada en 0
    int n;

    // Solicita al usuario la longitud de la matriz
    printf("dame el la long de la matriz");
    scanf("%d",&n);

    // Llama a la función para llenar la matriz en forma de caracol
    caracol(matriz, n);

    // Imprime la matriz resultante
    imprimirMatriz(matriz, n);

    return 0;
}

// Función que imprime una matriz cuadrada de tamaño n x n
void imprimirMatriz(int matriz[][500], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }
}

// Función que llena una matriz de tamaño n x n en forma de caracol (espiral)
// m: matriz a llenar
// n: tamaño de la matriz (n x n)
void caracol(int m[][500], int n) {
    int f_start = 0, f_end = n - 1; // Límites de filas
    int c_start = 0, c_end = n - 1; // Límites de columnas
    int num = 1; // Número a colocar en la matriz

    // Mientras queden capas por llenar
    while (f_start <= f_end && c_start <= c_end) {
        // Llena la fila superior de izquierda a derecha
        for (int c = c_start; c <= c_end; c++) {
            m[f_start][c] = num++;
        }
        f_start++; // Mueve el límite superior hacia abajo

        // Llena la columna derecha de arriba a abajo
        for (int f = f_start; f <= f_end; f++) {
            m[f][c_end] = num++;
        }
        c_end--; // Mueve el límite derecho hacia la izquierda

        // Llena la fila inferior de derecha a izquierda, si corresponde
        if (f_start <= f_end) {
            for (int c = c_end; c >= c_start; c--) {
                m[f_end][c] = num++;
            }
            f_end--; // Mueve el límite inferior hacia arriba
        }

        // Llena la columna izquierda de abajo hacia arriba, si corresponde
        if (c_start <= c_end) {
            for (int f = f_end; f >= f_start; f--) {
                m[f][c_start] = num++;
            }
            c_start++; // Mueve el límite izquierdo hacia la derecha
        }
    }
}