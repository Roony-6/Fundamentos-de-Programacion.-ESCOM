#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void LlenaArrIntAleaIter(int[],int);
void ImpArrInt(int[],int);
int particion(int [], int );
void intercambia(int *, int *);
void quicksort(int[],int);

int main(){
    srand(time(NULL));
    int array[100],n,pivote;
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    LlenaArrIntAleaIter(array,n);
    ImpArrInt(array,n);
    pivote=particion(array,n);
    printf("pivote= %d\n",pivote);
    puts("-----------------------------\n");
    ImpArrInt(array,n);
    quicksort(array,n);
    ImpArrInt(array,n);

    return 0;
}
void  quicksort(int array[],int n){

    int pivote;
    if(n>1){
        pivote=particion(array,n);
        quicksort(array,pivote);
        quicksort(array+pivote+1,n-pivote-1);

    }

}
//funcion para hacer la particion del array
int particion(int array[], int n){
    int p=0, i=1, d=n-1;
    while(i<=d){
        while((array[p]>array[i])&&(i<=d))
               i++;
        while((array[p]<=array[d])&&(i<=d))
                   d--;
        if(i<d)
           intercambia(array+i,array+d);
       // i++;d--;
    }
    intercambia(array,array+d);
    return i-1;
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

    //recibe un array y num de elementos y devuelve la posicion donde se enciuentra el nuemro menor