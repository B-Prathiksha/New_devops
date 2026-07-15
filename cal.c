#include <stdio.h>

int main() {
    int num1, num2, choice;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result = %d\n", num1 + num2);
            break;

        case 2:
            printf("Result = %d\n", num1 - num2);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
