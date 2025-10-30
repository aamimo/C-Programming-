// ASSIGNMENT 
/*
Name: Gilberto Amimo Otieno
Course: Computer Science 
Reg No: CT101/G/26584/25
Description: 1D Array : Weekly Revenue Tracker.
*/

#include<stdio.h>

int main(){
    int i;
    int revenue [7]= {59,78,90,69,34,89,100};
    int sum;
    float average;
    
    for (i=0;i<7;i++){
        printf("Daily revenue: \t%d\n",revenue[i]);
        sum+=revenue[i];
        average =sum/7;
        }
        printf("\n The total revenue : \t %d", sum);
        printf("\n The daily average revenue:\t %.2f",average);
        
        return 0;
    }
     
    
