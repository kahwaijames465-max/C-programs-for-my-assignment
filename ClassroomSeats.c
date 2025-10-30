/*
Name: Wangui James Kahwai 
Reg no:CT101/26490/25
Date:26/10/25
Description:2D array for classroom seats
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLS 6

int main() {
    int classroom[ROWS][COLS];
    int i, j;
    int totalOccupied = 0;
    int emptySeats[ROWS] = {0};
    int maxEmpty = 0, rowWithMostEmpty = 0;
    int frontRowFull = 1;
    
    // Initialize random seed
    srand(time(NULL));
    
    // Fill classroom with random occupancy
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            classroom[i][j] = rand() % 2; // 0 or 1
        }
    }
    
    // Calculate statistics
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            if(classroom[i][j] == 1) {
                totalOccupied++;
            } else {
                emptySeats[i]++;
            }
        }
        
        // Check for row with most empty seats
        if(emptySeats[i] > maxEmpty) {
            maxEmpty = emptySeats[i];
            rowWithMostEmpty = i;
        }
        
        // Check if front row is full
        if(i == 0) {
            for(j = 0; j < COLS; j++) {
                if(classroom[i][j] == 0) {
                    frontRowFull = 0;
                    break;
                }
            }
        }
    }
    
    // Display classroom layout
    printf("Classroom Layout:\n");
    for(i = 0; i < ROWS; i++) {
        printf("Row %d: ", i + 1);
        for(j = 0; j < COLS; j++) {
            if(classroom[i][j] == 1) {
                printf("[X]");
            } else {
                printf("[ ]");
            }
        }
        printf("\n");
    }
    
    // Display results
    printf("\nTotal occupied: %d/%d seats\n", totalOccupied, ROWS * COLS);
    printf("Row %d has the most empty seats (%d)\n", rowWithMostEmpty + 1, emptySeats[rowWithMostEmpty]);
    
    if(frontRowFull) {
        printf("Front row is full\n");
    } else {
        printf("Front row is not full\n");
    }
    
    return 0;
}