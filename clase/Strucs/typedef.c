#include<stdio.h>
 typedef struct Person {
     char name[50];
     int age;
 } Person;


int main() {
        Person person1, person2;
    
        // Input for person1
        printf("Enter name and age for person 1: ");
        scanf("%s %d", person1.name, &person1.age);
    
        // Input for person2
        printf("Enter name and age for person 2: ");
        scanf("%s %d", person2.name, &person2.age);
    
        // Output for person1
        printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
        
        // Output for person2
        printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);
    
        return 0;
    
}