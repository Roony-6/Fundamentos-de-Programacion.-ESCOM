#include <stdio.h>
#include <stdlib.h>

void quick(int array[], int min, int max){
    int i = min;
    int j = max;
    int temp;
    int mitad = array[(i + j)/2]; // Pivote: elemento central

    // Particiona el arreglo en dos partes
    do{
        while(array[i] < mitad && i < max)
            i++;
        while(array[j] > mitad && j > min)
            j--;
        if(i <= j){
            // Intercambia los elementos fuera de lugar
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);

    // Llama recursivamente para las sublistas izquierda y derecha
    if(min < j)
        quick(array, min, j);
    if(i < max)
        quick(array, i, max);
}

int main(){
    int size, a[100], i, j, k;

    printf("De que tamaño quieres el array? ");
    scanf("%d", &size);

    if(size > 100){
        printf("El valor maximo es 100 \n");
    }else{
        // Lee los elementos del arreglo
        for(i = 0; i < size; i++){
            printf("array[%d] = ", i + 1);
            scanf("%d", &a[i]);
        }
    }

    printf("ARRAY ORIGINAL\n");
    for(j = 0; j < size; j++){
        printf("%d \n", a[j]);
    }

    printf("ARRAY ORDENADO \n");

    // Ordena el arreglo usando QuickSort
    quick(a, 0, size - 1);

    // Imprime el arreglo ordenado
    for(k = 0; k < size; k++){
        printf("%d \n", a[k]);
    }

    return 0;
}
