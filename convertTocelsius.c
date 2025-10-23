//Assignment
/*
Name : Gilberto Amimo Otieno
Reg no : CT101/G/26584/25
Description: Q3.
Create a C function named convertToCelsius() that takes temperature in Fahrenheit 
*/

#include<stdio.h>

float convertTocelsius;

int main(void){
    int temperature;
    float celsius;
    
    printf("Enter the temperature in fahrenheit:\t");
    scanf("%d",&temperature);
    
    celsius=convertTocelsius (temperature);
    printf("Temperature in celsius:\t%.2f", celsius);
    
    return 0;
}

float convertTocelsius(int temperature){
    float celsius;
    celsius= (temperature - 32)*5/9;
    
    return celsius;
}
