#include <stdio.h>
int esAbundante(int );

int main(){
    printf("Dame un numero: ");
    int n;
    scanf("%d", &n);
    if (esAbundante(n)) {
        printf("El numero %d es abundante\n", n);
    } else {
        printf("El numero %d no es abundante\n", n);
    }   
}

//funcion que verifica si un numero es aundante
int esAbundante(int n){
    int suma = 0,i=1;
    
    while (i < n){
        if (n % i == 0) {
            suma += i;
        }
        i++;
    }
    
    return suma > n;
}