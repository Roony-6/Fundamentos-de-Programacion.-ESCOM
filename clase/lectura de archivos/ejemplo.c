#include<stdio.h>

void XXX(FILE*);

int main(int argsc,char* argsv[]) {
    FILE* f = fopen(argsv[1], "r");
    XXX(f);
    int i;
    printf("%d\n", argsc);
    for(i =0; i < argsc; i++) {
        printf("%s\n", argsv[i]);
    }
    return 0;
}
void XXX(FILE* f) {
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}