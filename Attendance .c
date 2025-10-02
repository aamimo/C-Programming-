// Attendance 
/* 
Name : Gilberto Amimo
Reg no : CT101/G/26584/25
Description: Eligibility of Exam
*/

#include<stdio.h>

int main (){
    
    int attendance, AverageMarks;
    
    printf("Enter percentage of attendance:\t");
    scanf("%d", & attendance );
    
    if (attendance <0 || attendance >100){
        
        printf("\n Invalid attendance choice");
        
        return 0;
    }
     
     printf("Enter AverageMarks:\t");
     scanf("%d", &AverageMarks);
     
     if (AverageMarks<0  ||  AverageMarks>100){
         
         printf("\n Invalid AverageMarks");
         
         return 0;
     }
     
 
    else if (attendance >= 75){
        
        printf("\n Eligible for exam ");
    }
    
    else if (attendance <75){
        
        printf("\n Not Eligible for exam");
        
    }
    
    else if (AverageMarks< 40){
        
        printf(" Not Eligible for exam");
    
    }
    
    else (AverageMarks>40){
        
        printf(" Eligible for Exam")
    }
    return 0;
}