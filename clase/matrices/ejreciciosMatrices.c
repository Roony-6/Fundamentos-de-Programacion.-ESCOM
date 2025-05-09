#include<stdio.h>

void llenarMatriz(int [][100],int);
int main(){
int matriz[100][100],n;
printf("Dame la long de la matriz\n");
scanf("%d",&n);
llenarMatriz(matriz,n);
imprimirMatrix(matriz,n);

}

void llenarMatriz(int matriz[][100], int n){
 for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        matriz[i][j]=i+1;
    }
 }
}
void imprimirMatrix(int matriz[][100], int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",matriz[i][j]);
        }
        putchar('\n');
     }

}