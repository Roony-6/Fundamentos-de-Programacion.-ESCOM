#include <stdio.h>
#include <string.h>

// Define a union with 
// different data types
union Student {
    int rollNo;
    float height;
    char firstLetter;
    char name[80];
};
struct Student2 {
    int rollNo;
    float height;
    char firstLetter;
    char name[80];
};

int main() {
    
    // Declare a union variable
    union Student data;
    struct Student2 data2;

    // Assign and print the roll number
    data.rollNo = 21;
    printf("%d\n", data.rollNo);
    data.height = 5.2;
    printf("%.2f\n", data.height);
    data.firstLetter = 'N';
    printf("%c\n", data.firstLetter);

    strcpy(data.name, "Roony");
    printf("%s\n", data.name);
    printf("%zu\n", sizeof(data));
    printf("%zu\n", sizeof(data2));
    return 0;

}
