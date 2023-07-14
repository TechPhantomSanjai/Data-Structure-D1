#include <stdio.h>

int main() {
    int N;

    // Input
    printf("Enter a number: ");
    scanf("%d", &N);

    // Check if the number is even or odd
    if (N % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
