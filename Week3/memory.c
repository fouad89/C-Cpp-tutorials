#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    // pointer for age variable
    // use the same data type as the variable
    // conventional names starts with p and Var name
    int *pAge = &age;
    double *pGpa = &gpa;
    char *pGrade = &grade;

    // to get physical memory address, %p for pointer
    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    // pointers are a type of data that can be used in the program
    printf("%p\n", pAge);
    // derefrencing is getting the value from the memory address
    printf("%d\n", *pAge);

    return 0;
}