#include<stdio.h>

void square(int n); 

int main() {
    int number;
    printf("enter number: "); 
    scanf("%d", &number);  
    square(number); 
    printf("number is: %d", number); 
    return 0;   
}
//call by value
void square(int n) {
    n = n*n; 
    printf("square of the number is: %d\n", n); 
}