 /*
 Name: Wangui James Kahwai 
 Reg no:CT101/G/26490/25
 Date:18th October,2025
 Description: function for electric bill calculation
 */
 
#include <stdio.h>

// Function prototype
int bill(int units);

int main() {
    int units;
    int total;

    printf("Enter your units consumed: ");
    scanf("%d", &units);

    // Call the function
    total = bill(units);

    // Display result
    printf("Total bill = Ksh %d\n",total);
    
    return 0;
}

// Function definition
int bill(int units) {
    int total =0;

if (units<=100){
   total = units * 10;
}
else if(units <= 200 ){
   total= units * 15;
}
else if(units > 200){
total = units * 20;
}

    
 
    return total;
}