#include <stdio.h>
#include <stdlib.h>

/*
full calculator
*/



int main()
{
    double num1;
    double num2;
    char op;
    double result;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter Operatir (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
    if (op == '+')
    {
        result = num1 + num2;
    }else if (op == '-')
    {
        result = num1 - num2;
    }else if (op == '/')
    {
        result = num1 / num2;
    }else if (op == '*')
    {
        result = num1 * num2;
    }else{
        printf("Invalid Operator");
    }
    printf("Result %f\n", result);
    
    
    
    


}