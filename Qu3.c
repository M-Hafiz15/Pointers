#include<stdio.h>
float Add (float *a, float *b, float *res) {
    *res = *a + *b;
    return *res;
}
float Sub (float *a, float *b, float *res) {
    *res = *a - *b;
    return *res;
}
float Mul (float *a, float *b, float *res) {
    *res = (*a) * (*b);
    return *res;
}
float Div (float *a, float *b, float *res) {
    if (*b == 0) {
        printf("Error, Division by zero\n");
        return 0;
    }
    *res = (*a) / (*b);
    return *res;
}

int main() {
    int choice;
    float a, b;
    float res = 0;

    printf("    Calculator  \n");
    printf("Enter any two numbers = ");
    scanf("%f %f", &a, &b);

    printf("Choose the operation you want to perform\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Choose = ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %f\n", Add(&a, &b, &res));
            break;
        case 2:
            printf("Result = %f\n", Sub(&a, &b, &res));
            break;
        case 3:
            printf("Result = %f\n", Mul(&a, &b, &res));
            break;
        case 4:
            printf("Result = %f\n", Div(&a, &b, &res));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}