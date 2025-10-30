/*
Name: Wangui James Kahwai 
Reg no:CT101/26490/25
Date:26/10/25
Description:1D array for students numbers 
*/
#include <stdio.h>

#define NUM_STUDENTS 15

int main() {
    int grades[NUM_STUDENTS] = {85, 62, 78, 90, 45, 67, 78, 92, 55, 78, 61, 74, 81, 53, 78};
    int i, sum = 0, passed = 0, failed = 0;
    float average;
    int frequency[101] = {0}; 
    int maxFreq = 0, mostFrequent = 0;
    
    // Calculate sum and count passed/failed
    for(i = 0; i < NUM_STUDENTS; i++) {
        sum += grades[i];
        if(grades[i] >= 50) {
            passed++;
        } else {
            failed++;
        }
        frequency[grades[i]]++;
    }
    
    average = (float)sum / NUM_STUDENTS;
    
    // Find most frequent grade
    for(i = 0; i <= 100; i++) {
        if(frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            mostFrequent = i;
        }
    }
    
    // Display results
    printf("Student Grades: ");
    for(i = 0; i < NUM_STUDENTS; i++) {
        printf("%d", grades[i]);
        if(i < NUM_STUDENTS - 1) printf(", ");
    }
    printf("\nClass Average: %.1f\n", average);
    printf("Passed: %d students\n", passed);
    printf("Failed: %d students\n", failed);
    printf("Most frequent grade: %d (appeared %d times)\n", mostFrequent, maxFreq);
    
    return 0;
}