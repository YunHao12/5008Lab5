#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Input the number for factorial calculation: ");
    scanf("%d", &num);
    
    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    
    int result = factorial(num);
    printf("The factorial of %d is %d.\n", num, result);
    
    return 0;
}
