//write a program using function to calculate the simple interest of a principle
//write a program using function to calcuate the roots of a quadratic equations, a ,b, c will be taken as input from user
#include<stdio.h>

float simpleInterest(float principle, float rate, int timeYears);  

int main() {
    float principle; float rate; int timeYears; 
    printf("enter the value of principle: "); 
    scanf("%f", &principle); 
    printf("enter the value of rate: "); 
    scanf("%f", &rate); 
    printf("enter the value of time: "); 
    scanf("%d", &timeYears); 

    printf("Simple interest is: %.2f", simpleInterest(principle, rate, timeYears)); 

    return 0; 
}

float simpleInterest(float principle, float rate, int timeYears) {
    

    float count; 
    return count = (principle*rate*timeYears)/100; 
}