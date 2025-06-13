#include <stdio.h>

// Define a union with 
// different data types
union Student {
    int rollNo;
    union Academic{
        int marks;
        char grade;
        char subject[50];
    } performance;
};

int main() {
    
    // Declare a union variable
    union Student abc;

    // Assign and print the 
    // roll number
    abc.rollNo = 21;
    printf("%d\n", abc.rollNo);
    
    // Assign and print the 
    // member of inner union
    abc.performance.marks = 91;
    printf("%d", abc.performance.marks);
    abc.performance.grade = 'A';
    printf("\n%c", abc.performance.grade); 

    printf("\n%zu\n", sizeof(abc));
    
    
    return 0;
}