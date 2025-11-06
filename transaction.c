//Assignment
/*
Name:Gilberto Amimo
Course: Bachelor Of Computer Science 
Reg no: CT101/G/26584/25
Description: 
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    float amount, total = 0;

    fp = fopen("sales.txt","r");

    if(fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    while(fscanf(fp,"%f",&amount) == 1)
    {
        total = total + amount;
    }

    fclose(fp);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}