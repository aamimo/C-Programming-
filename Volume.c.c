/*
NAME : Gilberto Amimo
REG NO : CT101/G/26584/25
DESCRIPTION:  volume

volume = Pi * radius * radius * height
*/

#include <stdio.h>

int main() {
    float Pi, radius, height, volume;
    
    printf("Enter radius (cm): ");
    scanf("%f", &radius);
    
    printf("Enter Pi: ");
    scanf("%f", &Pi);

    printf("Enter height (cm): ");
    scanf("%f", &height);
    
    volume = Pi * radius * radius * height;
     
    printf("Volume is %f cubic centimeters\n", volume);
    
    return 0;
}