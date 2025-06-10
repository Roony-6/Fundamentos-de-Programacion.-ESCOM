#include <stdio.h>

// Prototipo de la función recursiva para sumar los elementos de un arreglo
int sumaRecursiva(int arr[], int n);

int main() {
    int n;
    printf("Introduce el tamaño del arreglo: ");
    scanf("%d", &n);

    int arr[n];
    printf("Introduce los elementos del arreglo:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Llama a la función recursiva y muestra el resultado
    printf("La suma de los elementos del arreglo es: %d\n", sumaRecursiva(arr, n));
    return 0;
}

int sumaRecursiva(int arr[], int n) {
    // Caso base: si el arreglo está vacío, la suma es 0
    if(n == 0)
        return 0;
    // Caso recursivo: suma el último elemento y llama a la función con el resto
    return arr[n-1] + sumaRecursiva(arr, n-1);
}