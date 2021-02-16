#include <stdio.h>
#include "maths.h"

int main() {
    float Number1, Number2;
    char Operator;
    int choice;
    do {
        printf("Enter a mathematical expression using the following operators (+, -, *, /, ^, $): ");
        scanf("%f%c%f", &Number1, &Operator, &Number2);
        switch(Operator) {
            case '+':
                printf("Result: <%.2f>\n", add(Number1, Number2));
                break;
            case '-':
                printf("Result: <%.2f>\n", subtract(Number1, Number2));
                break;
            case '*':
                printf("Result: <%.2f>\n", multiply(Number1, Number2));
                break;
            case '/':
                printf("Result: <%.2f>\n", divide(Number1, Number2));
                break;
            case '^':
                printf("Result: <%.2f>\n", power(Number1, Number2));
                break;
            case '$':
                printf("Result: <%.2f>\n", recursivePower(Number1, Number2));
                break;
            default:
                printf("Wrong Operator!\n");
                break;
        }
        printf("Would you like to enter another expression? (Yes = 1; No = 0): ");
        scanf("%d", &choice);
    } while (choice != 0);
    printf("Bye!");
    return 0;
}
