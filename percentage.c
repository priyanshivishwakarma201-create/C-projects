#include <stdio.h>

int main() 
{
    // Declare variables
    int mm, p, c, m, h, e, tob, total;
    float per;

    // Input maximum marks of one subject
    printf("Enter max marks: ");
    scanf("%d", &mm);

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &p, &c, &m, &h, &e);

    // Calculate total obtained marks
    tob = p + c + m + h + e;

    // Calculate total maximum marks (for 5 subjects)
    total = mm * 5;

    // Calculate percentage
    per = ((float)tob / total) * 100;

    // Display results
    printf("\nTotal obtained marks: %d", tob);
    printf("\nOut of total marks: %d", total);
    printf("\nTotal percentage is: %.2f%%\n", per);

    return 0; // End of program
}
