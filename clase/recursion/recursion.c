#include<stdio.h>
int rNFibonacci(int n);
int rSumatoria(int n);
void rPrintAsc(int n);
void rPrintDesc(int n);
void rPrintFibonacciSequence(int n);
int main(){
    int n;
    printf("Dame un numero n: ");
    scanf("%d",&n);
    printf("El numero fibonacci de %d es %d\n",n,rNFibonacci(n));
    printf("La sumatoria de %d es %d\n",n,rSumatoria(n));
    printf("Imprimiendo de forma ascendente\n");
    rPrintAsc(n);
    printf("\nImprimiendo de forma descendente\n");
    rPrintDesc(n);
    printf("\nImprimiendo la secuencia de Fibonacci\n");
    rPrintFibonacciSequence(n);
    
    return 0;
}

int rNFibonacci(int n){
    if(n==0 || n==1){
        return n;

    }else{
        return rNFibonacci(n-1) + rNFibonacci(n-2);
    }
}

int rSumatoria(int n){
    if(n==1){
        return 1;
    }else{
        return n + rSumatoria(n-1);
    }
}      

void rPrintAsc(int n){
    if(n>=1){
        rPrintAsc(n-1);
        printf("%d, ",n);
    }
}

void rPrintDesc(int n){
    if(n>=1){
        printf("%d, ",n);
        rPrintDesc(n-1);
    }
}

void rPrintFibonacciSequence(int n){
    if(n >= 1){
        rPrintFibonacciSequence(n-1);
        printf("%d, ", rNFibonacci(n));
    }
}