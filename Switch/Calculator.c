#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double a, double b);
int modulus(int a, int b);
double squareRoot(double a);

int main() {
    int choice;
    double num1, num2;

    do {
        printf("\n=================================\n");
        printf("         C CALCULATOR\n");
        printf("=================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Modulus\n");
        printf("7. Square Root\n");
        printf("0. Exit\n");
        printf("=================================\n");

        printf("Enter your choice: ");

        // Validate menu input
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");

                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n');
                    break;
                }

                printf("Result = %.2lf\n", add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");

                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n');
                    break;
                }

                printf("Result = %.2lf\n", subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");

                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n');
                    break;
                }

                printf("Result = %.2lf\n", multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");

                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n');
                    break;
                }

                if (num2 == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    printf("Result = %.2lf\n", divide(num1, num2));
                }
                break;

            case 5:
                printf("Enter base and exponent: ");

                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n');
                    break;
                }

                printf("Result = %.2lf\n", power(num1, num2));
                break;

            case 6: {
                int a, b;

                printf("Enter two integers: ");

                if (scanf("%d %d", &a, &b) != 2) {
                    printf("Invalid input! Please enter integers.\n");
                    while (getchar() != '\n');
                    break;
                }

                if (b == 0) {
                    printf("Error: Cannot perform modulus by zero!\n");
                } else {
                    printf("Result = %d\n", modulus(a, b));
                }

                break;
            }

            case 7:
                printf("Enter a number: ");

                if (scanf("%lf", &num1) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n');
                    break;
                }

                if (num1 < 0) {
                    printf("Error: Cannot calculate square root of a negative number.\n");
                } else {
                    printf("Result = %.2lf\n", squareRoot(num1));
                }

                break;

            case 0:
                printf("\nThank you for using the C Calculator! 👋\n");
                break;

            default:
                printf("Invalid choice! Please select 0-7.\n");
        }

    } while (choice != 0);

    return 0;
}

// Addition
double add(double a, double b) {
    return a + b;
}

// Subtraction
double subtract(double a, double b) {
    return a - b;
}

// Multiplication
double multiply(double a, double b) {
    return a * b;
}

// Division
double divide(double a, double b) {
    return a / b;
}

// Power
double power(double a, double b) {
    return pow(a, b);
}

// Modulus
int modulus(int a, int b) {
    return a % b;
}

// Square Root
double squareRoot(double a) {
    return sqrt(a);
}
