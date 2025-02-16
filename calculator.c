#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;
    double a;
    double b;
    double result;

    printf("\nEnter your operator (+, - , /, *):");
    scanf("%c", &op);

    printf("\nEnter your first number:");
    scanf("%lf", &a);

    printf("\nEnter your second number:");
    scanf("%lf", &b);

    switch(op){
        case('+'):
            result =  a + b;
            printf("Result: %lf\n", result);
            break;
        case('-'):
            result =  a - b;
            printf("Result: %lf\n", result);
            break;
        case('/'):
            result =  a / b;
            printf("Result: %lf\n", result);
            break;

        case('*'):
            result =  a * b;
            printf("Result: %lf\n", result);
            break;
        default:
        printf("Invalid operator.\n");
        break;
    }
    return 0;
}