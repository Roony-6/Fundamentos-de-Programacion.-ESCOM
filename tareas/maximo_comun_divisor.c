#include<stdio.h>
int mcd(int,int);

int main(){
    int a,b;
    printf("Dame el primer numero\n");
    scanf("%d",&a);
    printf("Dame el segundo numero\n");
    scanf("%d",&b);
    printf("El maximo comun divisor de %d y %d es %d\n",a,b,mcd(a,b));
    return 0;
}

int mcd(int a,int b){
    if(b==0){
        return a;
    }else{
        return mcd(b,a%b);
    }
}