#include<stdio.h>

int main() {
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);

    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}

int esPrimo(int n) {
    if (n <= 1) {
        return 0; // No es primo
    }
    for (int i = 2; i * i <= n; i++) { // Solo iteramos hasta la raíz cuadrada de n
        if (n % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}