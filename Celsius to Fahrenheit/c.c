#include<stdio.h>

float toFahrenheit(float C) {
  return (9.0/5.0) * C+32.0; 
}

float toCelsius(float F) {
  return (5.0/9.0) * (F-32.0); 
}

int main() {
  double temperature; 
  char option; 

  printf("Enter the value: "); 
  scanf("%lf", &temperature); 

  printf("To what you want to convert your value ?\n");
  printf("Type 'F' for Fahrenheit and 'C' for Celsius: "); 
  scanf(" %c", &option); 
  
  switch (option) {
  case 'F':
    printf("%.2lf F", toFahrenheit(temperature)); 
    break;
  case 'C': 
    printf("%.2lf C", toCelsius(temperature));
    break;
  default: printf("You entered a wrong symbol!"); 
  }

  return 0;
}