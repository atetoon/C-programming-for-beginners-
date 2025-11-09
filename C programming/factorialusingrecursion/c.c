#include<stdio.h>

int fact(int n); 

int main() {
    printf("factorial is: %d", fact(5)); 
    return 0; 
} 
//recursive function
int fact(int n) {
if (n == 0) {
    return 1; 
}
int factnM1= fact(n-1); 
int factN = factnM1*n; 
return factN; 
}