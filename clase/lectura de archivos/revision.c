#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Entero;
typedef char* Cadena;
typedef float Flotante;

typedef struct{
      Cadena nombre;
      Entero edad;
      Flotante sueldo;
} Empleado;

void Burbuja(Empleado [],int);
void BurbujaEdad(Empleado [],int);
void Intercambia(Empleado*, Empleado*);
int main(){

    Empleado v[100], e1;
    FILE *ent=fopen("Empleados.txt","r");
    FILE *sal=fopen("EmpleadosOrd.txt","w");

    int i=0, n;
    v[i].nombre=(Cadena)malloc(sizeof(char)*80);
    while(fscanf(ent,"%s %d %f",v[i].nombre,&v[i].edad,&v[i].sueldo)!=EOF)
        v[++i].nombre=(Cadena)malloc(sizeof(char)*80);

/*
    Intercambia(v,v+1);
    i=0;
    printf("%s tiene %d a&os y un sueldo de %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);
    i=1;
    printf("%s tiene %d a&os y un sueldo de %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);

    return 0;
*/
    puts("\n-----Antes de ordenar---------------");
    //v[i]=v[i-1];
    n=i;
    for(i=0;i<n;i++)
       printf("%s tiene %d a&os y un sueldo de %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);
    fflush(stdin);
    getchar();
    puts("\n-----Despues de ordenar---------------");
    //v[i]=v[i-1];
    BurbujaEdad(v,n);
    n=i;
    for(i=0;i<n;i++){
       printf("%s tiene %d a&os y un sueldo de %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);
       fprintf(sal,"%s %d %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);
    }
    fclose(ent);
    return 0;

}

void Intercambia(Empleado *a, Empleado *b){
    Empleado t=*a;
    *a=*b;
    *b=t;
}

void Burbuja(Empleado v[], int n){
   int i,j;
   /*
   for(i=0;i<n;i++)
       printf("BBBBB %s tiene %d a&os y un sueldo de %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);
   fflush(stdin);
   getchar();
*/
   for(j=0;j<n;j++)
      for(i=n-1;i>j;i--)
         if(strcmp(v[i].nombre,v[i-1].nombre)<0)
               Intercambia(&v[i],&v[i-1]);
};

void BurbujaEdad(Empleado v[], int n){
   int i,j;
   /*
   for(i=0;i<n;i++)
       printf("BBBBB %s tiene %d a&os y un sueldo de %.2f\n",v[i].nombre,v[i].edad,v[i].sueldo);
   fflush(stdin);
   getchar();
*/
   for(j=0;j<n;j++)
      for(i=n-1;i>j;i--)
         if(v[i].edad<v[i-1].edad)
               Intercambia(&v[i],&v[i-1]);
};
