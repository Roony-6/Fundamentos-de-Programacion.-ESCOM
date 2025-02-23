#include <stdio.h>

int area_rectangulo(int b, int h){

    return b*h;
}

int perimetro_trinagulo(int a, int b){
    return 2*(a+b);

}
int main(){
    int base, altura;
    printf("This proogram calculates the area of a rectangle\n Enter the base:\n");
    scanf("%d", &base);
    printf("enter de height: \n");
    scanf("%d",&altura);
    printf("The area of the rectangle is: %d\nThe perimeter of the rectangle is: %d\n ", area_rectangulo(base, altura),perimetro_trinagulo(base, altura));
    return 0;

}
