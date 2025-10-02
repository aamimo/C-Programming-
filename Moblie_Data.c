//Assignment
/*
Name:Gilberto Amimo
Reg No:CT101/G/26584/25
Description: Internet Data Bundles
*/

#include <stdio.h>

int main() {
    int choice;

    printf("Internet Data Bundles:\n");
    printf("1. 100 MB - 50 KES\n");
    printf("2. 500 MB - 200 KES\n");
    printf("3. 1 GB   - 350 KES\n");
    printf("4. 2 GB   - 600 KES\n");


    printf("Enter your choice (1–4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected 100 MB. Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500 MB. Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB. Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB. Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}