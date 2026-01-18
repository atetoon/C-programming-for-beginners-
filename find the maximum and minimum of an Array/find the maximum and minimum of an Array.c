#include <stdio.h>


int main() {

  int n; 
  printf("enter the n for the length of array: "); 
  scanf("%d", &n); 
  
  int myNum[n]; 
  printf("enter %d elements: ", n); 
  for (int i = 0; i < n; i++) {
    scanf("%d", &myNum[i]); 
  }
  

  int max = myNum[0]; 
  int min = myNum[0]; 

  for(int i = 1;i<n; i++) {
    if(myNum[i]>max) {
      max = myNum[i]; 
    }
   if(myNum[i]<min) {
    min = myNum[i]; 
  }
}
  printf("Maximum element = %d\n", max); 
  printf("Minimum element = %d\n", min); 

  return 0; 
} 