/*
Name; James Kahwai 
Reg no;CT101/G/26490/26
Date;19/9/25
*/

#include <stdio.h>
#define PI 3.1416

int main(){
     //Variable declarationn 
    float radius, height, volume, surfaceArea;
    //prompt the user to enter 
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculation of volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display output on the user screen 
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}
