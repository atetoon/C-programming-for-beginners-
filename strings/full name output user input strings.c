#include <stdio.h>

int main() {
    char fullName[50];  // allocate space for the name
    printf("enter your full name : "); 
    gets(fullName); 
    puts(fullName); 

    return 0;
}

