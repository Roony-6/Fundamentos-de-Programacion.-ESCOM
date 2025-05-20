#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void llenaArrIntAleaIter(int[],int);
void impArrInt(int[],int);
void paresImpares(int[],int);

int main(){
    srand(time(NULL));
    int array[100],n;
    printf("dame la long del array");
    scanf("%d",&n);
    llenaArrIntAleaIter(array,n);
    impArrInt(array,n);
    paresImpares(array,n);

   return 0;
}

void paresImpares(int array[],int n){

    printf("pares:\n");
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            printf("%d ",array[i]);
        }
    }
    printf("\n impares:\n");
    for(int i=0;i<n;i++){
        if (!(array[i]%2==0)){
            printf("%d  ",array[i]);
        }
    }
}


void impArrInt(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("a[%d]=%d\t",i,a[i]);
    putchar('\n');
 }
 void llenaArrIntAleaIter(int a[],int n){
     int i;
     for(i=0;i<n;i++)
        a[i]=1+rand()%100;
    }
