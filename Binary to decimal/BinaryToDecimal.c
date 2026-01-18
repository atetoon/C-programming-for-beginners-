#include <stdio.h>

int binaryToDecimal(int n) {
  int last_digit; 
  int base = 1; 
  int dec = 0; 
  int temp; 

  while(n) {
    last_digit = n % 10; 
    n = n / 10;

    dec += last_digit * base;

    base = base * 2;
  }

  return dec; 
} 

int main() {

  int n; 
  printf("enter the value of binary: "); 
  scanf("%d", &n); 

  printf("here is your binary to decimal converstion: %d", binaryToDecimal(n)); 

  return 0; 
} 