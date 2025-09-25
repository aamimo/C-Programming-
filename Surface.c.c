// Assignment 
/*
Name: Gilberto Amimo
Reg No: CT101/G/26584/25
Description: Surface Area

Surface_Area= 2 * Pi * Radius^2  + Pi * Diametet * Height 

*/
#include <stdio.h>

int main(){
     
     float Pi, Radius,Diameter,Height,Surface_Area;
     
     printf("Enter Pi:\n");
     scanf("%f", &Pi);
     
     printf("Enter Radius (cm):\n");
     scanf("%f", &Radius);
     
     printf("Enter Diameter (cm):\n");
     scanf("%f",&Diameter);
     
     printf("Enter Height(cm):\n");
     scanf("%f", &Height);
     
     Surface_Area=2 * Pi * Radius * Radius + Pi * Diameter *Height;
     
     printf("Surface_Area is 2%f", Surface_Area);
     
     return 0;
}

