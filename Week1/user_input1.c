/*
    using fgets to read string input instead of scanf


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); // variabe, var length, and standard input
    printf("Your name is %s", name); // string concatination

    return 0;

}