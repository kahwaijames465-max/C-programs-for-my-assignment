/*
Name: Wangui James Kahwai 
Reg no:CT101/26490/25
Date:26/10/25
Description:2D array for room occupancy 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int i, j;
    
    // Initialize random seed
    srand(time(NULL));
    
    printf("=== Room Occupancy - Single Branch ===\n");
    
    // Fill with random occupancy data (0 or 1)
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; 
        }
    }
    
    // Display occupancy per floor
    for(i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;
        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: %d occupied, %d vacant\n", i + 1, occupied, vacant);
    }
    
    return 0;
}
    
