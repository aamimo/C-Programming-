/*
Name:Gilberto Amimo
Reg No: CT101/G/26584/25
Description: Simple intrest
  
 interest =  principle * rate/100 * time
*/
#include <stdio.h>

int main(){
    
    float principle, rate, time,interest;
    
    printf("Enter the value of principle:\n");
    scanf("%f", &principle);
    
    printf("Enter the value of rate:\n");
    scanf("%f", &rate);
    
    printf("Enter the value of time:\n");
    scanf("%f", &time);
    
    interest=principle*rate/100*time;
    
    printf("interest is ksh. %2f", interest );
    
    return 0;
}
