//Assignment
/*
Name: Gilberto Amimo Otieno 
Course: Bachelor of Computer Science 
Registration Number: CT101/G /26584/25
Description: 3D Array - Multiple Branches
*/

#include<stdio.h>

int main(){
    int i;
    int j;
    int k;
    int chain[3][5][10]={
        {
            {0,0,1,0,0,1,0,0,0,1},
            {1,1,0,0,0,1,0,0,1,1},
            {0,0,1,1,1,1,1,0,0,1},
            {1,1,1,1,0,0,1,1,1,1},
            {1,0,0,1,1,1,1,0,0,1}
        },
        
        {
            {0,1,0,1,0,1,0,1,0,1},
            {1,0,0,1,0,0,1,0,1,0},
            {1,0,0,1,0,1,0,1,1,1},
            {1,1,1,1,1,1,1,1,0,1},
            {0,0,0,0,0,0,0,0,0,1}
        },
        
        {
            {1,0,0,1,0,1,0,1,0,1},
            {1,0,0,1,0,1,0,1,0,1},
            {1,1,1,1,1,1,1,1,1,1},
            {0,0,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1}
        }
        
    };
    printf("\t\tKirinyaga Branches Hostels\n");
  for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            for(k=0;k<10;k++){
                printf("%d\t",chain[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf(" \t\t Zero means vacant\n");
     printf("\t\t One means occupied ");
    
    return 0;
}