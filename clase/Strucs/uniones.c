#include <stdio.h>

// Define a union with 
// different data types
union Student {
    int rollNo;
    float height;
    char firstLetter;
};

int main() {
    
    // Declare a union variable
    union Student data;

    // Assign and print the roll number
    data.rollNo = 21;
    printf("%d\n", data.rollNo);
    data.height = 5.2;
    printf("%.2f\n", data.height);
    data.firstLetter = 'N';
    printf("%c\n", data.firstLetter);
    printf("%zu\n", sizeof(data));

    return 0;
}