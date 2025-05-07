#include<stdio.h>
void Secuencia(int);
int main(){
    int n;
    printf("dame el valor de n\n");
    scanf("%d",&n);
    Secuencia(n);
    puts("----------------------");
    Secuencia2(n);
    puts("\nCon Buclws While:");
    ssecuencia1(n);
    ssecuencia2(n);

    return 0;
}

void Secuencia(int n){
    for(int i=1;i<=n;i++){
        for (int j=0;j<n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

void Secuencia2(int n){
    for(int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

void ssecuencia1(int n){
    int j=1,i=1;

    while(i<=n){
        j=1;
        while(j<=n){
            printf("%d",i);
            j++;
        }
        printf("\n");
        i++;
    }

}
void ssecuencia2(int n){
    int j=1,i=1;

    while(i<=n){
        j=1;
        while(j<=i){
            printf("%d",i);
            j++;
        }
        printf("\n");
        i++;
    }

}

//TAREA 