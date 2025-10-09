//Assigngment 
/*
Name:Gilberto Amimo
Reg no:CT101/G/26584/25
Description: Use of loop in accounting system to allow withdrawal of money upto insufficient funds
*/

#include<stdio.h>

int main(){
    
    int amount;
    int balance =24000;
    
    printf("Your current balance is %d",balance);
    
    while (balance>0){
         printf("\nEnter amount to withdraw:\t");
         scanf("%d", &amount);
         balance-=amount;
        
        printf("\nNew balance : \t %d", balance );
    }
    printf("\nInsufficient balance");
    
    return 0;
}