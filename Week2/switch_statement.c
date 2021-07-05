#include <stdio.h>
#include <stdlib.h>

/*

Switch Statements
*/

int main()
{
    char grade = 'F';
    switch (grade)
    {
    case 'A':
        printf("Great");
        break;
    
    case 'B':
        printf("Okay");
        break;
    
    case 'C':
        printf("poor");
        break;

    case 'D':
        printf("bad");
        break;
    case 'F':
        printf("fail");
        break;
    default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}