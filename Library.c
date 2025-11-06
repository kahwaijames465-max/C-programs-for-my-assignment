/*
Name: Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:3/8/25
Description:C file to keep a track of books borrowed from the library each day 
*/

#include <stdio.h>

int main() { 
    //variable declaration 
    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin); 

        fprintf(fp, "%s", title);
        printf("Book title saved successfully!\n");

        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); 

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All entries saved to borrowed_books.txt\n");

    return 0;
    }