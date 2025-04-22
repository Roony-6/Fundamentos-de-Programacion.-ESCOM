#include<stdio.h>
//El programa debe de pedirle un numero al usuario y debe de sumar todos los numeros pares desde 0 hasta n, donde n es el nuemero proporcionado por el usuario

int main(){
int n;
printf("dame un numero");
scanf("%d",&n);
printf("la suma de los numero pares desde 0 a %d es: %d",n,suma(n));
return 0;
}

int esPar(n){
if(!(n%2==0)){
	return 0;
}
else return 1;
}
int suma(int n){
int sum=0;
for(int i=0;i<n;i++){
	if(esPar(i)){
		sum+=i;
	}
}
return sum;
}
