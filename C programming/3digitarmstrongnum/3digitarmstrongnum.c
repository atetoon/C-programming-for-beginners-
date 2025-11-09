#include<stdio.h>
int main() {
    int a, b, c; 
    printf("enter 3-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c); 
    
    int x = a*a*a; 
    int y = b*b*b;
    int z = c*c*c;

    if (x+y+z == a*100 + b*10 +c ) {
        printf("%1d%1d%1d is Armstrong number.\n", a, b, c);
    } else {
        printf("%1d%1d%1d is not an Armstrong number.\n",a, b, c);      
    }
    
return 0;    
}

