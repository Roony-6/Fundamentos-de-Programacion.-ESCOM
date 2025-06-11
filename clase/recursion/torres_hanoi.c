#include<stdio.h>
int potencia(int,int);
int torres_hanoi(int);

int main(){
    int n;
    printf("Dame el numero de discos\n");
    scanf("%d",&n);
    printf("El numero de movimientos necesarios para %d discos es %d\n",n,torres_hanoi(n));
    printf("El numero de movimientos necesarios para %d discos es %d\n",n,rTorresHanoi(n));
    
    return 0;
}

int potencia(int n,int p){
    if (p==1){
        return n;
    }else{
        return n*potencia(n,p-1);
    }
    
}
int torres_hanoi(int n){
    if(n==1){
        return 1;
    }else{
        return potencia(2,n)-1;
        }
}
int rTorresHanoi(int n){
    if(n==1){
        return 1;
    }else{
        return 2*rTorresHanoi(n-1)+1;
    }
}