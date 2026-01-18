#include<stdio.h>
#include<math.h>
void temp(int temp); 
int main() {
    int a; 
        printf("enter the temperature: "); 
        scanf("%d", &a); 
        printf("temp is ");
        temp(a);  
    return 0; 
}
void temp(int temp) {
    if (temp<10) {
        printf("Cold"); 
    } else {
        printf("Hot"); 
    }
}
