/*
Name: Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:30/9/25
Description:c program for water bill calculator
*/

#include<stdio.h>

int main()
{
     //variable declaration
       int units;
       float bill;
     //prompt the user to enter 
    printf("Enter your units");
    scanf("%d",& units);
    //units check out 
    if (units <= 30 ){
    bill= units * 20;
   printf("Your bill =kes %.2f\n", bill); }
   
   else if (units > 30 && units < 60 ){
   bill= units * 25;
   printf("Your bill =kes %.2f\n", bill);}
   
   else if (units >= 60 ){
   bill= units * 30;
   printf("Your bill =kes %.2f\n", bill);}
   
    return 0;
}