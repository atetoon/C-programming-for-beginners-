#include <stdio.h>


int main() {

  int n;
  int temp; 

  printf("enter the value of n: ");            
  scanf("%d", &n);

  int array[n];                                  
  printf("enter %d elements: ", n); 

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);                       
  }
  
  int d; 
  printf("enter the value of D: ");            
  scanf("%d", &d);

  if (d >= n)
  {
  d = d % n; 
  }
  

  for(int i = 0; i < d; i++){
  temp = array[0]; 

  for (int j = 0; j < n-1; j++)
  {
    array[j] = array[j+1]; 
  }
  
  array[n-1] = temp; 
}

  printf("\nRotated array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);                       
  }

  return 0; 
} 