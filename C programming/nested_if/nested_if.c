#include<stdio.h>
int main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    
    if(number >= 0) {
        printf("number is positive\n"); 
        if (number%2 == 0)  {
            printf("number is even as well");

       }    else {
            printf("number is odd"); 
       }
    } else {
        printf("number is negative"); 
    }

return 0; 
}  