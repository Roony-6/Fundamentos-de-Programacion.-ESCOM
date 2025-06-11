#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void LlenaArrIntAleaIter(int[],int);
void ImpArrInt(int[],int);
void OrdMenorArrInt(int[],int,int);
void OrdArrInt(int[],int);
void Intercambia(int*,int*);

int main(){
   int a[100], i, n;
   srand(time(NULL));

   printf("n?");
   scanf("%d",&n);
   LlenaArrIntAleaIter(a,n);
   ImpArrInt(a,n);
   OrdArrInt(a,n);
   ImpArrInt(a,n);
   return 0;
}

void ImpArrInt(int a[], int n){
   int i;
   for(i=0;i<n;i++)
       printf("a[%d]=%d\t",i,a[i]);
   putchar('\n');
};

void LlenaArrIntAleaIter(int a[],int n){
    int i;
    for(i=0;i<n;i++)
       a[i]=1+rand()%100;
};
void OrdMenorArrInt(int a[], int p, int u){
   int i, t;
      for(i=u-1;i>p;i--)
        if(a[i]<a[i-1]){
            Intercambia(a+i,a+i-1);
        }
};
void OrdArrInt(int a[], int n){
    int i;
    for(i=0;i<n-1;i++)
        OrdMenorArrInt(a,i,n);
};

void Intercambia(int *a, int *b){
   int t=*a;
   *a=*b;
   *b=t;
};


