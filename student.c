//Assignment
/*
Name:Gilberto Amimo
Course: Bachelor Of Computer Science 
Reg no: CT101/G/26584/25
Description: 
*/
#include <stdio.h>

struct Student
{
    char name[50];
    int reg_no;
    float total_marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat","rb");

    if(fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    printf("Student Results\n");

    while(fread(&s,sizeof(struct Student),1,fp))
    {
        printf("Name: %s\n",s.name);
        printf("Marks: %.2f\n",s.total_marks);
    }

    fclose(fp);

    return 0;
}