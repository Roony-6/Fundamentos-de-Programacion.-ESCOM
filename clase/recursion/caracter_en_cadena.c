#include<stdio.h>
//la funcion retornará un valor booleano

int esta_en(char, char[]);
int n_veces(char, char[]);
int main(){
    char cadena[80];
    char c;
    printf("Dame una palabra\n");
    scanf("%s",cadena);
    printf("Dame el caracter que quieres buscar en la cadena\n");
    scanf(" %c",&c);
    printf("%d, %c se encuentra en %s\n",esta_en(c,cadena),c,cadena);
    printf("el caracter '%c' se encuentra en %s %d veces",c,cadena,n_veces(c,cadena));

    return 0;
}
int esta_en(char c, char cadena[]){
    if(cadena[0]=='\0'){
        return 0;
    }else if(c==cadena[0]){
        return 1;
    }else{
        return esta_en(c,cadena+1);
    }
}
int n_veces(char c, char cadena[]){
    if(cadena[0]=='\0'){
        return 0;
    }else if(c==cadena[0]){
        return 1+n_veces(c,cadena+1);
    }else{
        return n_veces(c,cadena+1);
    }
}
