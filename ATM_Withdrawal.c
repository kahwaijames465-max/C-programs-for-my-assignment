/*
Name:James Kahwai 
Reg no:CT101/G/26490/25
Date:6/10/25
Description:C program for ATM withdrawal 
*/

#include<stdio.h>

int main()
{
    //variable declaration 
    float balance;
    float withdrawal;
    //Prompt the user to enter 
    printf("Enter your account balance\n");
    scanf("%f", &balance);
    
    while(balance > 0 ){
    printf("Enter the amount to withdraw\n");
    scanf("%f", &withdrawal);
    
    balance-=withdrawal;
    printf("Remaining balance: %.2f\n",balance);
 
    if(balance<=0){
    printf("Insufficient balance\n");}
    }
    return 0;
}