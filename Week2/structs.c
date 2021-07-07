#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main(){
    struct Student student1; //creating a container student1
    student1.age =22;
    student1.gpa = 3.2;
    // with strings, we need to copy as it's an array
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    // structs can be reused

    struct Student student2; //creating a container student1
    student2.age =20;
    student2.gpa = 3.0;
    // with strings, we need to copy as it's an array
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Math");

    printf("%f", student1.gpa);

    return 0;
}