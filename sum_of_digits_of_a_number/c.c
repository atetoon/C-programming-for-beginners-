#include<stdio.h>

    int sum(int a, int b); 

int main() {
    int num; 
    printf("enter the number to check its digit sum: "); 
    scanf("%d", &num); 
    int a = num/10; 
    int b = num%10;  

    printf("the sum is: %d", sum(a,b)); 

    return 0; 
}

int sum(int x, int y) {
    int sumxy = x+y;
    return sumxy;  
}