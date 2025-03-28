#include <stdio.h>
float area(int b, int h){//funcion to return the area of a triangle
    return (b*h)/2;
}
int perimeter(int a, int b, int c){//funtion to return the perimeter of a triangule
    return a+b+c;
}
int main(){

    int b, h, a, c;//declaration of the variables
    printf("Este programa calcula el area y perimetro de un triangulo \n Ingerese la base:\n");
    scanf("%d", &b);
    printf("Ingrese la altura:\n");
    scanf("%d",&h);
    printf("Ingrese el lado a:\n");
    scanf("%d",&a);
    printf("Ingrese el lado b:\n");
    scanf("%d",&b);
    printf("Ingrese el lado c:\n");
    scanf("%d",&c);
    printf("El area del trinagulo es:%.2f\n", area(b,h));//printing the area
    printf("El perimetro del triangulo es:%d\n", perimeter(a,b,c));//printing the
    return 0;//end
    
}