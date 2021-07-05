#include <stdio.h>
#include <stdlib.h>



// void functions return nothing
void sayHi(){
    printf("Hello there\n");
}

// function parameters

void sayHi2(char name[20]){

    printf("Hello %s", name);
}

int main()
{
    sayHi(); // Calling the function
    sayHi2("Fouad \n");
    return 0;
}

