/*
Name:Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:18th October,2025
Description:c function for calculation of fare
*/

#include <stdio.h>

// Function prototype
int calculateFare(int distance);

int main() {
    int Fare;
    int distance;

    //prompt the user to enter 
    printf("Enter distance traveled in km");
    scanf("%d", &distance);

    // function calling 
    Fare = calculateFare(distance);

    // Display on the user screen 
    printf("fare = KSh. %d\n", Fare);

    return 0;
}

     // Function definition
    int calculateFare(int distance) {
      int fareRate = 50;
      int total = distance * fareRate;
    return total;
}