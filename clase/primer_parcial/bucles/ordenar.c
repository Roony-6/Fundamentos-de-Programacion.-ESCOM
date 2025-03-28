#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void burbuja(int [],int );
//void llenarArrayAleatorio(int [],int);
void llenarArray(int[],int);
int generarNumeroAleatorio(int);

int main(){
    int array[100];
    int n;
    srand(time(NULL));
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    //llenarArrayAleatorio(array,n);
    llenarArray(array,n);
    puts("-----------");
    burbuja(array,n);

    
}
void llenarArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("array[%d]?\n",i);
        scanf("%d",&array[i]);
    }
}

void burbuja(int array[],int n){
    for(int i=n-1; i>=0;i--){
        printf("a[%d]=%d\n",i,array[i]);
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