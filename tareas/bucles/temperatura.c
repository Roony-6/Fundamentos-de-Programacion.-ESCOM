#include<stdio.h>

float fahrenheit(int);
float kelvin(int);
void tabla(int, int);

int main(){
    int inicio;
    int fin;
    printf("dame el numero inicial\n");
    scanf("%d",&inicio);
    printf("Dame el numero final\n");
    scanf("%d",&fin);
    tabla(inicio,fin);
    return 0;
}
float fahrenheit(int temperatura_celcius){
    return (temperatura_celcius*9/5)+32;
}
float kelvin(int temperatura_celcius){
    return temperatura_celcius+273;

}
void tabla(int inicio, int f){
    printf("celcius\tfahrenheit\tkelvin\n");
    for(int i=inicio;i<=f;i++){
        printf("%d\t%.2f\t  %.2f\n",i,fahrenheit(i),kelvin(i));
    }
}
