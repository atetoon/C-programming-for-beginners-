#include<stdio.h>
int main() {
    int a; 
    printf("Enter a number: ");

    if (scanf("%d", &a) == 1) {
        if (a>0) {
            printf("Natural Number");
        } else {
            printf("Not a Natural Number");
        }
    } else   {
        printf("Invalid Input! O.O");     
    }
    
return 0;     
}