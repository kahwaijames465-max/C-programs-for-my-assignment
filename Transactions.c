/*
Name: Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:3/11/15
Description:C Program for writing sales amount to file sales.txt
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount;
    int n, i;

    // Open the file in append mode (won’t erase previous data)
    fp = fopen("sales.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file sales.txt\n");
        return 1;
    }

    printf("How many sales transactions do you want to record? ");
    scanf("%d", &n);

    // Get sales amounts and write to file
    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);

        fprintf(fp, "%.2f\n", amount);
    }

    fclose(fp);
    printf("\nAll sales transactions have been saved to sales.txt\n");

    return 0;
}