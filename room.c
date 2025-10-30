//ASSIGNMENT
/*
Name: Gilberto Amimo Otieno
Course:Bachelor Of Computer Science 
Registration Number: CT101/G/26584/25
Description: 2D Array - Room Occupancy (One Branch)
*/

#include<stdio.h>

int main(){
 int i;
 int j;
 int occupancy [5] [10]={
     {0,0,0,0,0,1,1,1,1,1},
     {1,0,1,0,1,0,1,0,1,0},
     {1,1,0,0,1,1,0,0,1,0},
     {1,1,1,1,1,1,1,1,1,1},
     {0,0,0,1,1,1,0,0,1,1}
     };
     printf("\t\t\tSAFARI HOSTEL\n");
     // 1=occupied 0= vacant 
     for(i=0;i<5;i++){
         for(j=0;j<10;j++){
             printf("%d\t",occupancy[i][j]);
         }
         printf("\n");
     }
     printf("\t\t\tone means occupied \n");
     printf("\t\t\tzero means vacant ");
     return 0;
}