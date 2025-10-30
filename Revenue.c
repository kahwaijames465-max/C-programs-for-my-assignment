/*
Name: Wangui James Kahwai 
Reg no: CT101/G/26490/25
Date:25/10/25
Description:1D array for a weekly revenue tracker
*/

#include <stdio.h>

int main() {
    //variable declaration
    double revenue[7];
    double total = 0.0;
    double average;
    int i;
    
    
    // prompt the user to enter 
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d (Kes): ", i + 1);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }
    
    average = total / 7;
    //display on user screen 
    printf("\nTotal weekly revenue: Kes %.2lf\n", total);
    printf("Average daily revenue: Kes %.2lf\n", average);
    
    return 0;
}