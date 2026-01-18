#include <stdio.h>

int main() {
    int i;
    printf("enter a number: ");
    scanf("%d", &i);

    if (i <= 1) {
        printf("%d is not a prime number\n", i);
        return 0;
    }

    // checking for divisors directly
    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            printf("%d is not a prime number\n", i);
            return 0;  // exit as we found divisor
        } 
    }

        printf("%d is a prime number\n", i); //number is prime
    return 0;
}