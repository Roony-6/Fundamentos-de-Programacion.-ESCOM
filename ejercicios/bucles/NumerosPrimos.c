#include<stdio.h>
int numerosPrimosEnN(int );
int main(){
	int n;
	printf("dame un numero entero: ");
	scanf("%d",&n);
	printf("hola");
	printf("El numero de numeros primos que hay en %d es: %d",n,numerosPrimosEnN(n));
	return 0;
}
int esPrimo(int n) {
    if (n <= 1) return 0; 
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;  

    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
int numerosPrimosEnN(int n){

	int contador=0;
	while(n>0){
		if(esPrimo(n%10)){
			contador++;
		}
		n/=10;
	}
	return contador;
}