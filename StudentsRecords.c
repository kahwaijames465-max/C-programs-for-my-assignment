/*
Name: Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:3/11/25
Description:C Program for entering students details and storing them
*/


#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

  
    fp = fopen("results.dat", "ab");
    if (fp == NULL) {
        printf("Error: Could not open file results.dat\n");
        return 1;
    }

    printf("How many student records do you want to add? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s.name); // read string with spaces
        printf("Registration No: ");
        scanf("%s", s.reg_no);
        printf("Total Marks: ");
        scanf("%f", &s.total_marks);

        // Write to binary file
        fwrite(&s, sizeof(struct Student), 1, fp);

        printf("Record for %s saved successfully!\n", s.name);
    }

    fclose(fp);
    printf("\nAll records have been saved to results.dat\n");
    return 0;
}
