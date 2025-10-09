//Assignment
/* 
Name: Gilberto Amimo
Reg no: CT101/G/26584/25
Description: prompt a user to ender password until he/she enters 1234 using while loop format 
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[10]; 

    do {
        printf("Enter password: ");
        scanf("%s", password);  
    } while (strcmp(password, "1234") != 0); 

    printf("Access Granted\n");

    return 0;
}