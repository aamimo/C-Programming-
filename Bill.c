// Assignment 
/*
Name: Gilberto Amimo
Reg no: CT101/G/26584/25
Description: Charges of bills per unit
*/

#include <stdio.h>

int main() {
    int units;
    float bill;
    
    printf("Enter number of water units consumed: ");
    scanf("%d", &units);


    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    printf("Total Bill: %.2f KES\n", bill);

    return 0;
}