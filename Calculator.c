#include <stdio.h>
#include <math.h>

int main()
{
    double num1;
    double num2;
    char Operator;

    printf("Enter a number:");
    scanf("%lf", &num1);

    printf("Enter an Operator (+, -, *, /, ^): ");
    scanf(" %c", &Operator);
    
    printf("Enter a number:");
    scanf("%lf", &num2);

    if(Operator == '+')
    {
       double sum = num1 + num2;
        printf("%f", sum);
    }
    else if (Operator == '-')
    {
       double diff = num1 - num2;
        printf("%f", diff);
    }
    else if (Operator == '/')
    {
        if (num1 && num2 != 0)
        {
        double div = num1 / num2;
        printf("%f", div);
        }
        else{
            printf("Error, Can't Divide by Zero \n");
        }
        
       
    }
    else if (Operator == '*')
    {
       double mult = num1 * num2;
        printf("%f", mult);
    }
    else if (Operator == '^')
    {
       double pow_result = pow(num1,num2);
        printf("%f", pow_result);
    }
    else
    {
        printf("Invalid Operator");
    }
    

}