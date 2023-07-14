#include <stdio.h>

int main() {
    int N;
    
    // Input
    printf("Enter a number: ");
    scanf("%d", &N);
    
    // Check the value of N using if-else statements
    if (N > 0) {
        printf("The number is positive.\n");
    } else if (N < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    
    return 0;
}
