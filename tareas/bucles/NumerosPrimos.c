#include<stdio.h>

int main() {
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);
    /*
    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }

    if (esPrimo2(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }*/
   mostranPrimosAnteriores(numero);




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

//otra forma de hacerlo:

int esPrimo2(int n){
    int i=2;
    if(n<=1){
        return 0;
    }
    if(n==2) return 1;
    while((n%i!=0)&& (i*2<n)){
        i++;
    }
    if(i*2>n){
        return 1;
    }
    else{
        return 0;
    }
}
void mostranPrimosAnteriores(int n){

    if(n<2) printf("El numero debe ser mayor a 2");
    else{
    for(int i=2;i<=n;i++){
        if(esPrimo2(i)){
            printf("%d ",i);
        }
    }
    }
}