#include<stdio.h>
int rNumeroDigitos(int);

int main(){
    int n;
    printf("dame un numero entero\n");
    scanf("%d",&n);
    printf("El numero de diginos de %d es : %d\n",n,rNumeroDigitos(n));
}

int rNumeroDigitos(int n){
    if(n<10){
        return 1;
    }else{
        return 1 + rNumeroDigitos(n/10);
    }
}