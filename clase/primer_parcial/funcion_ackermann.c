#include<stdio.h>

int ackermann(int, int);

int main(){
    int m,n;
    printf("Dame dos numeros\n");
    scanf("%d",&m);
    
    scanf("%d",&n);
    printf("%d",ackermann(m,n));

    return 0;
}
int  ackermann(int m, int n){
 
    if(m==0){
        return n+1;
   }else if(m>0 && n==0){
    ackermann(m-1,1);
   }else if(m>0 && n>0){
    ackermann((m-1),(ackermann(m,n-1)));
   }
}