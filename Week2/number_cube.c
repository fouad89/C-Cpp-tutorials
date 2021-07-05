#include <stdio.h>
#include <stdlib.h>
/*
Returning the cube of a number
the cube function can be written below main() 
only when add prototyping. 

Meaning that we add double cube(double num) 
before main()
*/

double cube(double num){
    double result = num * num * num;
    return result;
}

int main()
{
    double num;
    printf("Enter your number: ");
    scanf("%lf", &num);
    printf("Result: %f\n", cube(num));
    return 0;

}