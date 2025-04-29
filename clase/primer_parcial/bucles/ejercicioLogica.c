#include<stdio.h>

int main(){
    int n;
    printf("dame el valor de n\n");
    scanf("%d",&n);
    secuencia(n);

}

void secuencia(int n){
    for(int i=1;i<=n;i++){
        for (int j=0;j<n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}