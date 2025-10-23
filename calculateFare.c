//Assignment
/* Name : Otieno Gilberto Amimo
Reg no : CT101/G/26584/25
Description: Write a C Function to calculate fare
*/
#include<stdio.h>

float calculateFare;

int main (void){
    int kilometer;
    float totalFare;
    
    printf("Enter the kilometer travelled:\t");
    scanf("%d",&kilometer);
    
    totalFare= calculateFare(kilometer);
    
    printf("The amount to be paid: Ksh %2.f", totalFare);
}

float calculateFare( int kilometer ){
    float totalFare;
    
    totalFare= kilometer * 50;
    
    return totalFare;
}
