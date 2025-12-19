#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float num1, num2, result;
    int choice;
    char continueProg;

    do {

        printf("Enter the first number: \n");
        scanf(" %f", &num1);

        printf("\n");

        printf("Enter the second number: \n");
        scanf(" %f", &num2);

        printf("choose an operation: \n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Your result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Your result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Your result: %.2f\n", result);
            break;
        case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Your result: %.2f\n", result);   
        }
            break;
        case 5:
        if (num2 != 0)
        {
            result = fmod(num1,num2);
            printf("The remainder is: %.2f\n", result);
        }
            break;
        
        default:
        printf("Invalid option!\n");
            break;
        }


    // Continuar rodando? (s/n):
    printf("\nKeep running? (y/n): \n"); 
    scanf(" %c", &continueProg);

} while (continueProg == 'y' || continueProg == 'Y');

    return 0;
}