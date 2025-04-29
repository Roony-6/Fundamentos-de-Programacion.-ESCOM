#include<stdio.h>
void Secuencia(int);
int main(){
    int n;
    printf("dame el valor de n\n");
    scanf("%d",&n);
    Secuencia(n);

}

void Secuencia(int n){
    for(int i=1;i<=n;i++){
        for (int j=0;j<n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}