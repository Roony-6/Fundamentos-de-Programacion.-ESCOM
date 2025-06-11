#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ordenarInsercion(int [],int);
void intercambia(int *, int *);
void LlenaArrIntAleaIter(int[],int);
void ImpArrInt(int[],int);
int main(){
    srand(time(NULL));
    int array[100],n;
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    LlenaArrIntAleaIter(array,n);
    ImpArrInt(array,n);
    ordenarInsercion(array,n);
    ImpArrInt(array,n); 

    return 0;
}

void ordenarInsercion(int array[], int n){

    int i=1, j;
    while (i<n)
    {
        j=i;
        while (j>0 && array[j]<array[j-1])
        {
            intercambia(array+j,array+j-1);
            j--;
        }   
        i++;
    }
}
void intercambia(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
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