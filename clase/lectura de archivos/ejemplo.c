#include<stdio.h>
#include<stdlib.h>
typedef struct mystruct {
    char *pal;
    char *pal2;
    int ent1;
    float ent2;
    } *Registro;

void XXX(FILE*);

int main(int argsc,char* argsv[]) {
    
    FILE* f = fopen(argsv[1], "r");
    XXX(f);
   /* int i;
    printf("%d\n", argsc);
    for(i =0; i < argsc; i++) {
        printf("%s\n", argsv[i]);
    }
        */
    
    
    return 0;
}
void XXX(FILE* f) {

    // Declaración de variables
    int i=0;
    Registro equipo[20], aux;    

    // Reserva memoria para un registro auxiliar
    aux= (Registro)malloc(sizeof(struct mystruct));
    // Reserva memoria para la cadena pal2 del registro auxiliar (dos veces, la primera se pierde)
    aux->pal2=(char*)malloc(20*sizeof(char));
    aux->pal2=(char*)malloc(20*sizeof(char));

    // Lee los datos del archivo hasta EOF
    // Cada línea debe tener dos cadenas, un entero y un flotante
    while((fscanf(f, "%s%s%d%f", aux->pal, aux->pal2, &aux->ent1, &aux->ent2))!= EOF){
        // Reserva memoria para un nuevo registro en el arreglo equipo
        equipo[i] = (Registro)malloc(sizeof(struct mystruct));
        // Reserva memoria para las cadenas del nuevo registro
        equipo[i]->pal = (char*)malloc(20*sizeof(char));
        equipo[i]->pal2 = (char*)malloc(20*sizeof(char));
        // Copia los valores leídos del auxiliar al nuevo registro
        equipo[i]->ent1 = aux->ent1;
        equipo[i]->ent2 = aux->ent2;
        i++;
    } 
        
    // Imprime la cantidad de registros leídos
    printf("Se han leido %d registros\n", i);
    printf("Los registros son:\n");
    // Imprime los registros almacenados en el arreglo equipo
    for(int j = 0; j < i; j++) {
        printf("%s %s %d %.2f\n", equipo[j]->pal, equipo[j]->pal2, equipo[j]->ent1, equipo[j]->ent2);
        // Libera la memoria reservada para cada registro
        free(equipo[j]->pal);
        free(equipo[j]->pal2);
        free(equipo[j]);
    }

    // Limpia el buffer de entrada y espera una tecla
    fflush(stdin);
    getchar();
 
}