// Assignment 
/*
NAME: GILBERTO AMIMO
REG NO : CT101/G/26584/25
DESCRIPTION: Write a program that checks if a student is eligible for final exams. 
*/
#include <stdio.h>

int main() {
    float attendance, averageMarks;

    // Input values
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    // Check eligibility
    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}

