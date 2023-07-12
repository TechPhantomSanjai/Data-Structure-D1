#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Check if the sum is even or odd
    if (sum % 2 == 0) {
        printf("The sum is even.\n");
    } else {
        printf("The sum is odd.\n");
    }

    return 0;
}