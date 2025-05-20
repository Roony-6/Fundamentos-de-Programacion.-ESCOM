#include<stdio.h>

int sumaDiagonal(int [][50], int n);
void llenarMatrix(int matrix[][50], int n);
void imprimirMatrix(int matrix[][50], int n);

int main(){

    int matrix[50][50], n;
    printf("dame la long de la matriz: ");
    scanf("%d",&n);
    llenarMatrix(matrix,n);
    imprimirMatrix(matrix,n);
    printf("\nLa suma de la diagonal principal es: %d ",sumaDiagonal(matrix,n));
}

int sumaDiagonal(int matrix[][50], int n){
    int fila=0, columna=0,suma=0;
    
    while(fila<n && columna<n){
        suma+=matrix[fila][columna];
        fila++,columna++;
    }
    return suma;
}

void llenarMatrix(int matrix[][50], int n){
    int cont=1;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            matrix[i][j]=cont++;
        }
    }
}
void imprimirMatrix(int matrix[][50], int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        putchar('\n');
    }
}