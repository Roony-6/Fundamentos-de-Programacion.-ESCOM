#include<stdio.h>

int main(){//main funtion
    int y;//declaration of a variable (year)
    printf("give me a year: ");
    scanf("%d",&y);//reading the calue of the year
    if ((y%4==0 && y%100!=0) || y%400==0){//condition to know if the year is a leap year

        printf("%d is a leap year ",y);

    }else{
        printf("%d is not a leap year ",y);
    }
    return 0;//end
}