#include<stdio.h>
typedef struct Fraccion{
    int coeficiente;
    int numerador;
    int denominador;
} Fraccion;
void imprimirFraccion(Fraccion fraccion);
int main() {

    Fraccion a,b,c;
    a.coeficiente=3;a.numerador=1;a.denominador=3;
    printf("%d[%d/%d]\n", a.coeficiente, a.numerador, a.denominador);
    printf("Dame una fraccion(coeficiente, numerador, denominador):\n");
    scanf("%d %d %d", &b.coeficiente, &b.numerador, &b.denominador);
    imprimirFraccion(b);
}
void imprimirFraccion(Fraccion fraccion){
    if (fraccion.coeficiente != 0) {
        printf("%d[%d/%d]\n", fraccion.coeficiente, fraccion.numerador, fraccion.denominador);
    } else {
        printf("[%d/%d]\n", fraccion.numerador, fraccion.denominador);
    }
}
Fraccion leerFraccion() {
    Fraccion fraccion;
    printf("Dame una fraccion(coeficiente, numerador, denominador):\n");
    scanf("%d %d %d", &fraccion.coeficiente, &fraccion.numerador, &fraccion.denominador);
    return fraccion;
}




int mcd(){
    int a, b, r;
    printf("Dame dos numeros para calcular su MCD:\n");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int rmcd(int a, int b) {
    if(a==b) {
        return a}
    else if(a>b) {
        return rmcd(a-b, b);
    } else {
        return rmcd(a, b-a);
    }
}
int mcm(int a, int b) {
    return (a * b) / rmcd(a, b);
}
Fraccion mixtaAImpropia(Fraccion mixta) {
    Fraccion propia;
    if(mixta.denominador == 0) {
        
    propia.numerador = mixta.coeficiente * mixta.denominador + mixta.numerador;
    propia.denominador = mixta.denominador;
    propia.coeficiente = 0; // La fracción propia no tiene coeficiente
    
}
return propia;
}