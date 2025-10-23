/*
Name: Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:18th October,2025
Description:C function for conversion of temperature from Fahrenheit to Celsius 
*/

#include <stdio.h>

// Function prototype
float convertToCelsius(float fahrenheit);

int main() { 
    //variable declaration 
    float fahrenheit;
    float celsius;

    // prompt the user to enter 
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // function calling 
    celsius = convertToCelsius(fahrenheit);

    // Display result on the user screen 
    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}

// Function definition
    float convertToCelsius(float fahrenheit) {
      float celsius;
        celsius = (fahrenheit - 32) * 5 / 9;
      return celsius;
}