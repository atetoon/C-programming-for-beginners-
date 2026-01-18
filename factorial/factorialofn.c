#include<stdio.h> 

 int main() {
    int n;
    unsigned long long fact = 1;

    printf("enter the number n: ");
    scanf("%d", &n); 

    for(int i=1;i<=n;i++) {
        fact = fact*i; 
    } 
    printf("Factorial of the number is: %llu", fact); 
    return 0;
 }  