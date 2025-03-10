#include<stdio.h>
#include<math.h>
void rInvertirNumero(int);

int main(){
    int n;
    printf("Proporcioname un numero entero\n.");
    scanf("%d",&n);
    printf("El numero %d invertido \n",n);
    rInvertirNumero(n);
    return 0;
}

void rInvertirNumero(int n){
    if(n<10){
        printf("%d",n);
    }else{
        printf("%d",n%10);
        rInvertirNumero(n/10);
 
        }
    }
