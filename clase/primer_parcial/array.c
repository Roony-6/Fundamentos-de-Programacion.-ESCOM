#include <stdio.h>

int NumChars(char []);

int main(){
    char p[80];
    printf("Dame una string\n.");
    scanf("%s",p);
    printf("%s tiene  %d caracteres \n",p,NumChars(p));
    printf("Esto es un pequño cambio");
    return 0;
}

int NumChars (char palabra[]){

    if (palabra[0] == '\0'){
        return 0;
    }
    else{
        return 1 + NumChars(palabra + 1);
    }
}
