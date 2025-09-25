//simple C program that implements your requirement. It prompts the user for their age and income, then checks whether they qualify for the loan:
/*
Name;James Kahwai 
Reg no;CT101/G/26490/25
Date;19/9/25
*/
 
#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt the user for their age and annual income 
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) 
   //display output on the user screen 
    {
        printf("Congratulations! You qualify for the loan.\n");
    } else {
        printf("Sorry, you do not qualify for the loan.\n");
    }
    return 0;
    }

