#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void LlenaArrIntAleaIter(int[],int);
void ImpArrInt(int[],int);
void seleccion(int[],int);
void intercambia(int *, int *);
int main(){
    srand(time(NULL));
    int array[100],n;
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    LlenaArrIntAleaIter(array,n);
    ImpArrInt(array,n);
    seleccion(array,n);
    ImpArrInt(array,n);


    return 0;
}

void seleccion(int array[],int n){
    int menor;
    for(int i=0;i<n-1;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[menor]){
                menor=j;
            }
        }
        intercambia(array+i,array+menor);
    }

    
}



void ImpArrInt(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("a[%d]=%d\t",i,a[i]);
    putchar('\n');
 }

 
 void LlenaArrIntAleaIter(int a[],int n){
     int i;
     for(i=0;i<n;i++)
        a[i]=1+rand()%100;
    };
void intercambia(int *a, int *b){
        int t=*a;
        *a=*b;
        *b=t;
    }