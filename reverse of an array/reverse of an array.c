#include <stdio.h>


int main() {

  int n; 
  printf("enter the value of n: ");            //input n 
  scanf("%d", &n);

  

  int array[n];                                  //array decleration
  printf("enter %d elements: ", n); 

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);                       //input element to array
  }
  printf("Original Array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);     // printing original array
  }
  printf("\nReversed Array: "); 
  for (int i = n-1; i >= 0; i--)
  {
    printf("%d ", array[i]);        //printing reversed array 
  }
  
  
  return 0; 
} 