#include <stdio.h>

int main() {
  char op; 
  double a, b, result; 
  
  printf("enter the value of a: ");
  scanf("%lf", &a);
  printf("enter the value of b: ");
  scanf("%lf", &b); 
  printf("select the operation (+, -, *, /): "); 
  scanf(" %c", &op);
  
  switch (op) {
  case '+':
    result = a + b; 
    printf("the result is: %lf", result); 
    break;
  case '-': 
    result = a - b; 
    printf("the result is: %lf", result); 
    break; 
  case '*':
    result = a * b; 
    printf("the result is: %lf", result); 
    break;
  case '/': 
    result = a / b; 
    printf("the result is: %lf", result); 
    break;   
  default: printf("not a valid operation!");
  }

  return 0; 
}