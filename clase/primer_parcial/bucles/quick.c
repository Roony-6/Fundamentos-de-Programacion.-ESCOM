#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void LlenaArrIntAleaIter(int[],int);
void ImpArrInt(int[],int);
int particion(int [], int );
void intercambia(int *, int *);
int main(){
    srand(time(NULL));
    int array[100],n;
    printf("dame el numero de elementos\n");
    scanf("%d",&n);
    LlenaArrIntAleaIter(array,n);
    ImpArrInt(array,n);
  
    ImpArrInt(array,n);


    return 0;
}

//funcion para hacer la particion del array
int particion(int a[], int n){
    int p=0,i=1,d=n-1,t;
    while(i<d){
        //buscamos el i-esimo elemento tal que a[p]<a[i]
        while(a[p]>a[i] && (i<d)){
            i++;}
        if(i<d){
            while(a[p]<=a[d]&&(i<d)){
                d--;
            }
        }
        intercambia(a+i, a+d);
        i++;
        d--;

    }
    intercambia(a+p, a+i-1);
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