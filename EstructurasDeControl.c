#include <stdio.h>

int main() {
    // 1. Estructura de control if-else
    int edad = 18;
    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    // 2. Estructura de control switch
    int dia = 3;  // 1=Lunes, 2=Martes, 3=Miércoles...
    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        default:
            printf("Dia invalido\n");
    }

    // 3. Estructura de control for (bucle for)
    printf("Conteo de 1 a 5 usando for:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    // 4. Estructura de control while (bucle while)
    int j = 1;
    printf("Conteo de 1 a 5 usando while:\n");
    while (j <= 5) {
        printf("%d\n", j);
        j++;
    }

    // 5. Estructura de control do-while (bucle do-while)
    int k = 1;
    printf("Conteo de 1 a 5 usando do-while:\n");
    do {
        printf("%d\n", k);
        k++;
    } while (k <= 5);

    // 6. Uso de continue y break en un bucle
    printf("Demostración de continue y break en un bucle:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;  // Sale del bucle cuando i es 6
        }
        if (i == 3) {
            continue;  // Salta la iteración cuando i es 3
        }
        printf("%d\n", i);
    }

    return 0;
}
