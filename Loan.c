// Assignment 
/*
NAME: Gilberto Amimo
REG NO: CT101/G/26584/25
DESCRIPTION: Assignment to allow the user  to enter age and salary income per month.
*/

#include<stdio.h>

int main(){
    
 int age;
 float income;
 
 printf("Please Enter your Age: ");
 scanf("%d", &age);
 
 printf("Please Enter your annual income (in sh):");
 scanf("%f",&income);
 
 if ( age>=21 &income>=21000){
     
     printf("Congratulations you qualify for the loan");
 }
  
  if (age<=20 &income>=21000){
      
      printf("Unfortunately, we are unable to offer you loan");
  }
  
  return 0;
}