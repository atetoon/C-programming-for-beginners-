#include<stdio.h>

void findMax(int *x, int *y); 

int main() {
     int a, b; 
     printf("Enter 1st number: "); 
     scanf("%d", &a);
     printf("Enter 2nd number: "); 
     scanf("%d", &b);
      

    findMax(&a, &b); 
return 0;   
}

void findMax(int *x, int *y) {
    if (*x>*y) {
        printf("Maximum value is: %d", *x); 
    } else {
        printf("Maximum value is: %d", *y); 
    }
}