#include<stdio.h>

void llenarArray(int [],int);
void ImpArrInt(int [],int);
void rock(int [],int);
void bubbleSort(int [],int);
void invertirArray(int[],int);
int main(){
    int array[30],n;
    printf("dame la long");
    scanf("%d",&n);
    llenarArray(array,n);
    ImpArrInt(array,n);
    rock(array,n);
    ImpArrInt(array,n);


}


void invertirArray(int a[], int n) {
    int inicio = 0, fin = n - 1, temp;
    while (inicio < fin) {
        temp = a[inicio];
        a[inicio] = a[fin];
        a[fin] = temp;
        inicio++;
        fin--;
    }
}

// ...existing code...
void llenarArray(int a[],int n){
    int num;
    for(int i=0;i<n;i++){
        printf("dame el numero");
        scanf("%d",&num);
        a[i]=num;
    }

}
void bubbleSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Rock Sort: Ordena de mayor a menor
void rock(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


void ImpArrInt(int a[], int n){
   int i;
   for(i=0;i<n;i++)
       printf("a[%d]=%d\t",i,a[i]);
   putchar('\n');
};