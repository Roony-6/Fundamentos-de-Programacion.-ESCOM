#include<stdio.h>

int main(){//main funtion
    int year;//declaration of a variable (year)
    printf("give me a year: ");
    scanf("%d",&year);//reading the calue of the year
    if ((year%4==0 && year%100!=0) || year%400==0){//condition to know if the year is a leap year

        printf("%d is a leap year ",year);

    }else{
        printf("%d is not a leap year ",year);
    }
    return 0;//end
}