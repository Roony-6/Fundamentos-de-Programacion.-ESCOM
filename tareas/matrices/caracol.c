#include<stdio.h>
void caracol(int [][500], int);
int main(){

    int matriz[][500]={0};
    int n;

    printf("dame el la long de la matriz");
    scanf("%d",&n);

    caracol(matriz,n);
    imprimirMatriz(matriz,n);

    return 0;
}

void imprimirMatriz(int matriz[][500],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matriz[i][j]);
        }
        putchar('\n');
    }
}

void caracol(int m[][500], int n) {
    int f_start = 0, f_end = n - 1; // Row boundaries
    int c_start = 0, c_end = n - 1; // Column boundaries
    int num = 1; // Number to fill in the matrix

    while (f_start <= f_end && c_start <= c_end) {
        // Fill top row (left to right)
        for (int c = c_start; c <= c_end; c++) {
            m[f_start][c] = num++;
        }
        f_start++; // Move the top boundary down

        // Fill right column (top to bottom)
        for (int f = f_start; f <= f_end; f++) {
            m[f][c_end] = num++;
        }
        c_end--; // Move the right boundary left

        // Fill bottom row (right to left), if applicable
        if (f_start <= f_end) {
            for (int c = c_end; c >= c_start; c--) {
                m[f_end][c] = num++;
            }
            f_end--; // Move the bottom boundary up
        }

        // Fill left column (bottom to top), if applicable
        if (c_start <= c_end) {
            for (int f = f_end; f >= f_start; f--) {
                m[f][c_start] = num++;
            }
            c_start++; // Move the left boundary right
        }
    }
}
