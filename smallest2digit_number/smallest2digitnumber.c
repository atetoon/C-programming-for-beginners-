#include<stdio.h>

int main() {
    int a, b; 
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: "); 
    scanf("%d", &b); 
    if (a<b) {
        printf("Smallest number is: %d", a);
    }
    else if (b<a) {
        printf("Smallest number is: %d", b); 
    }
    else {
        printf("both numbers are equal"); 
    }

    return 0;
}