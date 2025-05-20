#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int posicionMinimo(int [], int);
int posicionMaximo(int [], int);
void imprimirArray(int [], int);
void llenaArrIntAleaIter(int[],int);

int main(){
    srand(time(NULL));
    int array[50], n;
    printf("dame la longitud del array\n");
    scanf("%d",&n);
    
    llenaArrIntAleaIter(array,n);
    imprimirArray(array,n);
    printf("\nEl minimo es a[%d]=%d",posicionMinimo(array,n),array[posicionMinimo(array,n)]);
    printf("\nEl maximo es a[%d]=%d",posicionMaximo(array,n),array[posicionMaximo(array,n)]);
}

int posicionMaximo(int array[],int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(array[max]<array[i]){
            max=i;
        }
    }
    return max;

}
int posicionMinimo(int array[],int n){
    int min=0;
    for(int i=1;i<n;i++){
        if(array[min]>array[i]){
            min=i;
        }
    }
    return min;
}
void imprimirArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}

void llenaArrIntAleaIter(int array[], int n){
    if(n>=0){
        llenaArrIntAleaIter(array,n-1);
        array[n]=rand()%100 +1;
    }
}