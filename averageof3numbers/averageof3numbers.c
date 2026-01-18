#include<stdio.h>
#include<math.h>
//write a program to print the average of 3 numbers
int main() {
    
    int x, y, z; //declearning variables before using
    //asking user to enter 3 values
    printf("enter the 3 numbers of which you want average: ");
    //reading 3 integers received from the user   
    scanf("%d %d %d", &x, &y, &z); 

    //calculting the average using float data type to avoid decimal loss
    float average = (x+y+z)/3.0; 
    //displaying the calculate value 
    printf("average of given 3 numbers is: %f", average); 


   return 0; 
}   

