#include<stdio.h>
int main(){

	return 0;
}
int esPrimo(int n){
if(n>1){
	if(n==2) return 1;
	if(!(n%2==0 && n!=2)) return 1;
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0){
		return 0;
		}else return 1;
	}

}else return 0;
}

int numeroPrimosEnN(int n)
