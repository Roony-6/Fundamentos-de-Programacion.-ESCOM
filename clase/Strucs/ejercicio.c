#include<stdio.h>
typedef struct Fraccion{
    int coeficiente;
    int numerador;
    int denominador;
} Fraccion;
void imprimirFraccion(Fraccion );
Fraccion leerFraccion();
Fraccion mixtaAImpropia(Fraccion );
Fraccion simplificarFraccion(Fraccion);
Fraccion ImpropiaAMixta(Fraccion );
Fraccion sumaDeFracciones(Fraccion a, Fraccion b);
int mcd();
int rmcd(int a, int b);
int mcm(int a, int b);

int main() {

    Fraccion a,b,c;
    a.coeficiente=3;a.numerador=1;a.denominador=3;
    printf("%d[%d/%d]\n", a.coeficiente, a.numerador, a.denominador);
    printf("Dame una fraccion(coeficiente, numerador, denominador):\n");
    scanf("%d %d %d", &b.coeficiente, &b.numerador, &b.denominador);
    imprimirFraccion(b);
    c=mixtaAImpropia(b);
    printf("Fraaccion impropia: %d[%d/%d]\n", c.coeficiente, c.numerador, c.denominador);
    printf("Fraccion simplificada: %d[%d/%d]\n", simplificarFraccion(c).coeficiente, simplificarFraccion(c).numerador, simplificarFraccion(c).denominador);

    printf("Fraccion mixta: %d[%d/%d]\n", ImpropiaAMixta(c).coeficiente, ImpropiaAMixta(c).numerador, ImpropiaAMixta(c).denominador);

    puts("Dame dos fracciones para sumar:");

    Fraccion fraccion1 = leerFraccion();
    Fraccion fraccion2 = leerFraccion();
    printf("la suma de las fracciones es:\n");
    Fraccion resultado = sumaDeFracciones(fraccion1, fraccion2);

    imprimirFraccion(resultado);

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
        return a;}
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

    if(mixta.coeficiente != 0) {
        propia.numerador = mixta.coeficiente * mixta.denominador + mixta.numerador;
        propia.coeficiente=0;
    } else {
        propia.numerador = mixta.numerador;
    }
  
return propia;
}

Fraccion ImpropiaAMixta(Fraccion impropia) {
    Fraccion mixta;
    if(impropia.numerador >= impropia.denominador) {
        mixta.coeficiente = impropia.numerador / impropia.denominador;
        mixta.numerador = impropia.numerador % impropia.denominador;
    } else {
        mixta.coeficiente = 0;
        mixta.numerador = impropia.numerador;
    }
    mixta.denominador = impropia.denominador;
    return mixta;
}
Fraccion simplificarFraccion(Fraccion fraccion) {
    Fraccion temp=ImpropiaAMixta(fraccion);
    int divisor = rmcd(temp.numerador, temp.denominador);
    temp.numerador /= divisor;
    temp.denominador /= divisor;
    return temp;
}
Fraccion sumaDeFracciones(Fraccion a, Fraccion b) {
    Fraccion resultado;
    resultado.denominador = mcm(a.denominador, b.denominador);
    resultado.numerador = (a.numerador * (resultado.denominador / a.denominador)) + (b.numerador * (resultado.denominador / b.denominador));
    resultado.coeficiente = 0; // Asumiendo que la suma da una fracción impropia
    
    return simplificarFraccion(resultado);
}