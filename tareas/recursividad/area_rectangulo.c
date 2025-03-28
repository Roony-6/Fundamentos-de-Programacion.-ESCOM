#include <stdio.h>

int area_rectangulo(int b, int h){//funtion to return the area of a rectangule

    return b*h;
}

int perimetro_trinagulo(int a, int b){//funtion to return the perimeter of a rectangule
    return 2*(a+b);
}
int main(){//main funtion
    int base, altura;// declaration of the variables
    printf("This proogram calculates the area of a rectangle\n Enter the base:\n");
    scanf("%d", &base);//reading the value of the base
    printf("enter de height: \n");
    scanf("%d",&altura);//reading the value of the height
    printf("The area of the rectangle is: %d\nThe perimeter of the rectangle is: %d\n ", area_rectangulo(base, altura),perimetro_trinagulo(base, altura));
    //printing the area n the perimeter of the rectangule
    return 0;//End

}
