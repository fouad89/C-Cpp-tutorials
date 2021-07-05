#include <stdio.h> 
#include <stdlib.h>

/*
Finding the max of 3 numbers
using if, else if, else
and &&
or ||
equals ==
not equal !=
negate statement !
*/

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >=num3){
        result = num1;
    }else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }else
    {
        result = num3;
    }
    

    return result;
}

int main()
{
    printf("%d\n", max(10,2,3));
}