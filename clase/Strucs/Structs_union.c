#include<stdio.h>
#include<string.h>

union persona{
    char pal[30];
    int rollNom;
    float code;
};

struct alumno{
     union persona miembro;
     int grado;
     char clave;
};


int main(){

   struct alumno estudiante;

   strcpy(estudiante.miembro.pal,"Fatima");
   estudiante.grado=2;
   estudiante.clave='A';
   printf("%s\t%d\t%c\n",estudiante.miembro.pal,estudiante.grado,estudiante.clave);

   estudiante.miembro.rollNom=630480;
   estudiante.grado=2;
   estudiante.clave='A';
   printf("%d\t%d\t%c\n",estudiante.miembro.rollNom,estudiante.grado,estudiante.clave);

   estudiante.miembro.code=5.6;
   estudiante.grado=2;
   estudiante.clave='A';
   printf("%.2f\t%d\t%c\n",estudiante.miembro.code,estudiante.grado,estudiante.clave);

   return 0;

}