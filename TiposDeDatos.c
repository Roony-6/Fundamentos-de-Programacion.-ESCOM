#include <stdio.h>

int main(){

    // Tipos enteros
    int entero = 10;
    signed char letra = 'A'; // char también se puede usar para enteros
    unsigned int sinSigno = 3000000000U; // Un entero sin signo
    short int corto = 32767; // short int
    long int largo = 2147483647L; // long int
    long long int largoLargo = 9223372036854775807LL; // long long int
    unsigned short int sinSignoCorto = 65535U; // unsigned short
    unsigned long int sinSignoLargo = 4294967295UL; // unsigned long
    unsigned long long int sinSignoLargoLargo = 18446744073709551615ULL; // unsigned long long

    // Tipos de punto flotante
    float decimal = 3.14f;
    double decimalDouble = 3.1416;
    long double decimalLargo = 3.14159265359L;

    // Tipo booleano (en C99 y posterior, con stdbool.h)
    _Bool esVerdadero = 1; // o puede ser 0 para falso

    // Puntero (ejemplo de puntero a int)
    int *ptr = &entero;

    // Imprimir todos los valores con sus formatos
    printf("Entero: %d\n", entero);
    printf("Letra (carácter): %c\n", letra);
    printf("Entero sin signo: %u\n", sinSigno);
    printf("Short int: %hd\n", corto);
    printf("Long int: %ld\n", largo);  // %ld para long int
    printf("Long long int: %lld\n", largoLargo); // %lld para long long int
    printf("Unsigned short int: %hu\n", sinSignoCorto);
    printf("Unsigned long int: %lu\n", sinSignoLargo);
    printf("Unsigned long long int: %llu\n", sinSignoLargoLargo);

    printf("Decimal (float): %.2f\n", decimal);
    printf("Decimal (double): %.4lf\n", decimalDouble);
    printf("Decimal (long double): %.10Lf\n", decimalLargo); // %Lf para long double

    printf("Booleano (verdadero/falso): %d\n", esVerdadero);  // %d para _Bool

    printf("Puntero (dirección de memoria): %p\n", (void *)ptr);

    // Escanear nuevos valores para cada tipo de dato
    printf("\nIngrese nuevos valores:\n");

    printf("Entero: ");
    scanf("%d", &entero);

    printf("Letra: ");
    scanf(" %c", &letra); // Se agrega un espacio en blanco antes de %c para consumir el carácter de nueva línea anterior

    printf("Entero sin signo: ");
    scanf("%u", &sinSigno);

    printf("Short int: ");
    scanf("%hd", &corto);

    printf("Long int: ");
    scanf("%ld", &largo);

    printf("Long long int: ");
    scanf("%lld", &largoLargo);

    printf("Unsigned short int: ");
    scanf("%hu", &sinSignoCorto);

    printf("Unsigned long int: ");
    scanf("%lu", &sinSignoLargo);

    printf("Unsigned long long int: ");
    scanf("%llu", &sinSignoLargoLargo);

    printf("Decimal (float): ");
    scanf("%f", &decimal);

    printf("Decimal (double): ");
    scanf("%lf", &decimalDouble);

    printf("Decimal (long double): ");
    scanf("%Lf", &decimalLargo);

    printf("Booleano (1 para verdadero, 0 para falso): ");
    scanf("%d", &esVerdadero);

    // Imprimir los nuevos valores
    printf("\nNuevos valores ingresados:\n");
    printf("Entero: %d\n", entero);
    printf("Letra: %c\n", letra);
    printf("Entero sin signo: %u\n", sinSigno);
    printf("Short int: %hd\n", corto);
    printf("Long int: %ld\n", largo);
    printf("Long long int: %lld\n", largoLargo);
    printf("Unsigned short int: %hu\n", sinSignoCorto);
    printf("Unsigned long int: %lu\n", sinSignoLargo);
    printf("Unsigned long long int: %llu\n", sinSignoLargoLargo);
    printf("Decimal (float): %.2f\n", decimal);
    printf("Decimal (double): %.4lf\n", decimalDouble);
    printf("Decimal (long double): %.10Lf\n", decimalLargo);
    printf("Booleano: %d\n", esVerdadero);

    return 0;
}
