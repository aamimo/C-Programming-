// Revision
/*
Name:Gilberto Amimo
Course: Bachelor Of Computer Science 
Reg no: CT101/G/26584/25
Description: 
*/
#include <stdio.h>

int main()
{
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}