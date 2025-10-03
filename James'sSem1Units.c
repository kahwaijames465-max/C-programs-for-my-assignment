/*
Name: James Kahwai 
Reg no:CT101/G/26490/25
Date:19/9/25
*/

#include<stdio.h>

int main()
{
//units for this semester;
printf("physics\n");
printf("Mathematics for science\n");
printf("Analogue Electronics\n");
printf("Introduction to programming and problem solving\n");
printf("Discrete Mathematics\n");
printf("Fundamentals of ICT\n");
printf("communication skills \n");
printf("Computer architecture\n");

//my details; phone number,bank balance and height;
long phoneNumber;
double bankBalance;
float height;

    printf("Enter your phone number\n");
    scanf("%ld", &phoneNumber);
    
    printf("Enter your bank balance\n");
    scanf("%lf", & bankBalance);
    
    printf("enter your height in metres\n");
    scanf("%f,", & height);
    
    //print output to the user screen 
    printf("\n=== Your details ===\n");
    printf("My phoneNumber: is %ld\n");
    printf("My bankBalance: is %.3lf\n");
    printf("my height is: %.2f\n");
    return 0;
}
