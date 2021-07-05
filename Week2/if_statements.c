#include <stdio.h>
#include <stdlib.h>

/*
if statements
*/

int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
    return result;

}

int main()
{
    printf("The bigger number is: %d\n", max(2,3));
    return 0;
}