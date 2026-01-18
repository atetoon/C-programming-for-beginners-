#include<stdio.h>

void square(int n); 
void _sqaure(int *n); 

int main() {
    int number=4;
     square(number); 
    printf("number is: %d\n", number); 

    _sqaure(&number); 
    printf("number is: %d", number); 

    return 0;   
}
//call by value
void square(int n) {
    n = n*n; 
    printf("square of the number is: %d\n", n); 
}

void _sqaure(int *n) {
    *n = (*n)* (*n); //4 * 4
    printf("square of the number is: %d\n", *n); 
}