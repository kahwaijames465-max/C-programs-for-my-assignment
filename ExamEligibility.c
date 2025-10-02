/*
Name:Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:30/9/25
Description:C program displaying student's exam eligibility 
*/

#include<stdio.h>

int main()
{
//variable declaration 
     int attendance; 
     int marks;
//prompt the user to enter 
    printf("Enter your percentage attendance\n");
    scanf("%d",& attendance);
    
    printf("Enter your marks\n");
    scanf("%d",&marks);
       //check eligibility 
   if (attendance >= 75 &&  marks >= 40){
    printf("eligible for exam\n");
    }
    else if (attendance < 75 || marks < 40){
    printf("not eligible for exam\n");
    }
    
    printf("The average attendance is %d\n", attendance);
    printf("The average marks are %d\n", marks);
    
    return 0;
}