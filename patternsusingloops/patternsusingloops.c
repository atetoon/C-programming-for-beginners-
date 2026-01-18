#include<stdio.h> 
//print this
// *****
// *****
// *****
// ***** using loops 

 int main() {
     
    for (int i = 1; i <= 4; i++) {        // Outer loop: runs 4 times (rows)
    for (int j = 1; j <= 5; j++) {    // Inner loop: prints 5 stars per row
        printf("*");
    }
    printf("\n");                     // This newline moves to the next line
}

    return 0;
 }  