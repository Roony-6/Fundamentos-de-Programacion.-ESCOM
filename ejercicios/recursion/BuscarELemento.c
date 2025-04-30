#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int buscar(int[], int,int);
void llenarArrayAleatorio(int[],int);
void ImpArrInt(int[],int);
int generarNumeroAleatorio(int);
int main(){
    srand(time(NULL));
    int array[100];
    int n,o;
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    llenarArrayAleatorio(array,n);
    ImpArrInt(array,n);
    printf("dame el elemento a encontrar\n");
    scanf("%d",&o);
    
    puts("-----------");
    printf("%d esta en la posicion : %d",o,buscar(array,n,o));
}

/*int buscar(int array[], int n, int objetivo){

    if (n <= 0) {
        return -1; 
    }
    else if(array[0]==objetivo && n>0){
        return 0;
    }else {
    return 1+ buscar(array+1,n-1,objetivo);
    }

}*/
int buscar(int array[], int n, int objetivo) {
    if (n <= 0) {
        return -1; // Ya no quedan elementos: no lo encontré
    }

    if (array[0] == objetivo) {
        return 0; // Lo encontré en esta posición
    }

    int pos = buscar(array + 1, n - 1, objetivo); // Busco en el resto
    if (pos == -1) {
        return -1; // Tampoco lo encontré en el resto
    } else {
        return 1 + pos; // Lo encontré más adelante, sumo 1 al índice
    }
}




void llenarArrayAleatorio(int array[],int n){
    if(n>=0){
        llenarArrayAleatorio(array,n-1);
        array[n]=generarNumeroAleatorio(100);
    }
}
int generarNumeroAleatorio(int rango){
    return rand()%100 +1;
}
void ImpArrInt(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("a[%d]=%d\t",i,a[i]);
    putchar('\n');
 }

 int es_primo(int n){
    
 }