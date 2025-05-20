#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void llenarAleatorio(int a[], int n);
void imprimirArreglo(int a[], int n);
int* pegarArreglos(int a[], int n, int b[], int m);

int main(){
    srand(time(NULL));
    int n, m;
    printf("Tamaño del primer arreglo: ");
    scanf("%d", &n);
    printf("Tamaño del segundo arreglo: ");
    scanf("%d", &m);

    int a[n], b[m];

    llenarAleatorio(a, n);
    llenarAleatorio(b, m);

    printf("Primer arreglo:\n");
    imprimirArreglo(a, n);

    printf("Segundo arreglo:\n");
    imprimirArreglo(b, m);

    int* c = pegarArreglos(a, n, b, m);
    if (c == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Arreglo combinado:\n");
    imprimirArreglo(c, n + m);

    free(c);
    return 0;
}

int* pegarArreglos(int a[], int n, int b[], int m) {
    int* c = (int*)malloc((n + m) * sizeof(int));
    if (c == NULL) return NULL; // Verifica si hay memoria suficiente

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < m; j++) {
        c[n + j] = b[j];
    }
    return c;
}



void llenarAleatorio(int a[], int n) {
    
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 100 +1;
    }
}


void imprimirArreglo(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

