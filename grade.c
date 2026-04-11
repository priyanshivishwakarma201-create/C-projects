#include <stdio.h>   // Header file for input and output functions

int main() {
    
    int a;   // Variable to store the value entered by user

    printf("enter a value: ");   // Ask user to enter a number
    scanf("%d", &a);             // Take input from user and store in variable a

    // Check if value is greater than 60
    if(a > 60){
        printf("%d 1st rank.", a);   // If condition true → print 1st rank
    }
    
    // Check if value is greater than 30 but less than or equal to 60
    else if(a > 30){
        printf("%d 2nd rank.", a);   // If condition true → print 2nd rank
    }
    
    // If value is 30 or less
    else{
        printf("%d fail.", a);       // Print fail
    }

    return 0;   // End of program
}
