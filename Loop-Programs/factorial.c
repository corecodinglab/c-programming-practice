/*
Program: Factorial of a Number
Description: Calculates factorial using a for loop.
*/

#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
