#include<stdio.h>
int rSumaDigitos(int);

int main(){
    int n;
    printf("dame un numero;\n");
    scanf("%d",&n);
    printf("La suma de los digitos de %d es %d\n",n,rSumaDigitos(n));
}

int rSumaDigitos(int n){
    if(n<10){
        return n;
    }else{
        return n%10 + rSumaDigitos(n/10);
    }
}