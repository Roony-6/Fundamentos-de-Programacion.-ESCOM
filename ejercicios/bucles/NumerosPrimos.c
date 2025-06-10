#include<stdio.h>

// Prototipo de la función que cuenta los dígitos primos en un número
int numerosPrimosEnN(int );

// Función principal
int main(){
    int n;
    printf("dame un numero entero: ");
    scanf("%d",&n);
    printf("hola");
    // Imprime la cantidad de dígitos primos en el número ingresado
    printf("El numero de numeros primos que hay en %d es: %d", n, numerosPrimosEnN(n));
    return 0;
}

// Función que determina si un número es primo
// Devuelve 1 si es primo, 0 si no lo es
int esPrimo(int n) {
    if (n <= 1) return 0; // 0 y 1 no son primos
    if (n == 2) return 1; // 2 es primo
    if (n % 2 == 0) return 0;  // Números pares mayores a 2 no son primos

    // Revisa divisibilidad desde 3 hasta la raíz cuadrada de n
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

// Función que cuenta cuántos dígitos primos hay en el número n
int numerosPrimosEnN(int n){
    int contador = 0;
    while(n > 0){
        // Si el dígito es primo, incrementa el contador
        if(esPrimo(n % 10)){
            contador++;
        }
        n /= 10; // Elimina el último dígito
    }
    return contador;
}