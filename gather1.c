#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a % b;
}

int main() {
    int choice, num1, num2, result;
    char cont;

    do {
        printf("Arithmetic Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %d + %d = %d\n", num1, num2, result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %d - %d = %d\n", num1, num2, result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %d * %d = %d\n", num1, num2, result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = divide(num1, num2);
                printf("Result: %d / %d = %d\n", num1, num2, result);
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = modulus(num1, num2);
                printf("Result: %d %% %d = %d\n", num1, num2, result);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    return 0;
}