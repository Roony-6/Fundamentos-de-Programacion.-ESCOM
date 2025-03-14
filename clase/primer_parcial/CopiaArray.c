#include<stdio.h>

void copiaArray(char[], char[]);

int main(){
    char a[80], b[80];
    printf("Dame una string .\n");
    scanf("%s",a);
    copiaArray(a,b);    
    printf("%s\t%s\n",a,b);
    return 0;
}             
void copiaArray(char origen[], char destino[]){
    if(origen[0]=='\0'){
        destino[0]=origen[0];

    }else{
        destino[0]=origen[0];      
        copiaArray(origen+1,destino+1);
    }
}