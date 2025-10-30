/*
Name: Wangui James Kahwai 
Reg no:CT101/26490/25
Date:26/10/25
Description:3D array for multiple branches of hotel 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(NULL));
    
    // 3D array for hotel chain: 3 branches, 5 floors, 10 rooms per floor
    int chain[3][5][10];
    
    // Assign random occupancy (1 = occupied, 0 = vacant) to each room
    for(int branch = 0; branch < 3; branch++) {
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }
    
    // Calculate total occupied rooms across all branches
    int totalOccupied = 0;
    
    for(int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1) {
                    totalOccupied++;
                    branchOccupied++;
                }
            }
        }
        
        printf("Branch %d: %d occupied rooms\n", branch + 1, branchOccupied);
    }
    
    // Display the total number of occupied rooms across all branches
    printf("\n=== HOTEL CHAIN OCCUPANCY REPORT ===\n");
    printf("Total occupied rooms across all 3 branches: %d\n", totalOccupied);
    printf("Total capacity across all branches: %d rooms\n", 3 * 5 * 10);
    printf("Overall occupancy rate: %.2f%%\n", (totalOccupied * 100.0) / (3 * 5 * 10));
    
    // Optional: Display detailed occupancy for each branch and floor
    printf("\n=== DETAILED OCCUPANCY BY FLOOR ===\n");
    for(int branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        for(int floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;
            for(int room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1) {
                    floorOccupied++;
                }
            }
            printf("  Floor %d: %d/10 rooms occupied\n", floor + 1, floorOccupied);
        }
    }
    
    return 0;
}