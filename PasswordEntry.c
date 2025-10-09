/*
Name:James Kahwai 
Reg no:CT101/G/26490/25
Date:6/10/25
Description:C program for password entry 
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Invalid password. Try again.\n");
        }

    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}
