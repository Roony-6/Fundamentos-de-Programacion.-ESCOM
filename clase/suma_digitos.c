#include<stdio.h>

int rSUmaDigitos(int);

int main(){
    int n;
    printf("Dame un numero etero.\n");
    scanf("%d", &n);
    printf("La suma de los digitos de %d es: %d",n,rSUmaDigitos(n));




    return 0;

}
int rSumaDigitos(int n){

    if(n<10){
        return n;
    }else{
        return  n%10 + rSUmaDigitos(n/10);
    }
}