#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void LlenaArrIntAleaIter(int[],int);
void ImpArrInt(int[],int);
int posicionNumeroMenor(int[],int);

int main(){
    srand(time(NULL));
    int array[]={}, n;
    printf("dame el numero de elemetos de tu array\n");
    scanf("%d",&n);
    array[n];
    LlenaArrIntAleaIter(array,n);
    ImpArrInt(array,n);
    puts("------------------------\n");
    printf("la posicion del numero menor es: %d",posicionNumeroMenor(array,n));

   return 0;
}

int posicionNumeroMenor(int array[],int n){
    int numero_menor=array[0];
    int p=0;
    for (int i = 1 ; i <=n; i++)
    {
        if (array[i]<numero_menor)
        {
            numero_menor=array[i];
            p=i;
        }
    }
    return p;

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
    }
