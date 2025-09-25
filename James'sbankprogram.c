/*
Name: James Kahwai 
Reg no:CT101/G/26490/25
Date:19/9/25
*/
#include<stdio.h>
int main()
{
//variable declaration;
int age;
double income;

printf("Enter your age\n");
scanf("%d",&age);

printf("Enter your annual income\n");
scanf("%lf",& income);

// display output on user screen 
if(age>=21 & income >=21000);
printf("You have qualified to get loan\n");
if(age<21 & income <21000);
printf("sorry You have not qualified to get the loan\n");
    return 0;
}