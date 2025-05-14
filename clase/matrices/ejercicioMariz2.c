#include<stdio.h>

void llenarMatriz(int [][100],int,int []);
int main(){
int matriz[100][100],fila[100],n;

printf("Dame la long de la Fila\n");
scanf("%d",&n);
llenarMatriz(matriz,n,fila);
imprimirMatrix(matriz,n);

}

void llenarMatriz(int matriz[][100], int n,int arreglo[]){
 for (int i=0;i<n;i++){
     llenarFila(matriz[i],n);
    
 }
}
void llenarFila(int arreglo[], int n){
    for (int i=0;i<n;i++){
           arreglo[i]=i+1;
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