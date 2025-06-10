#include<stdio.h>
// El programa pide un número al usuario y suma todos los números pares desde 0 hasta n (no incluye n).

// Prototipos de funciones
int esPar(int n);   // Devuelve 1 si n es par, 0 si no lo es
int suma(int n);    // Suma todos los números pares desde 0 hasta n-1

int main(){
    int n;
    printf("dame un numero: ");
    scanf("%d",&n);
    // Imprime la suma de los números pares desde 0 hasta n-1
    printf("la suma de los numero pares desde 0 a %d es: %d", n, suma(n));
    return 0;
}

// Función que determina si un número es par
// Devuelve 1 si es par, 0 si es impar
int esPar(int n){
    if(!(n%2==0)){
        return 0;
    }
    else return 1;
}

// Función que suma todos los números pares desde 0 hasta n-1
int suma(int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(esPar(i)){
            sum+=i;
        }
    }
    return sum;
}
