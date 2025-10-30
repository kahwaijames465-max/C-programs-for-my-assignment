/*
Name: Wangui James Kahwai 
Reg no:CT101/26490/25
Date:26/10/25
Description:3D array for inventory management 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STORES 3
#define SHELVES 4
#define PRODUCTS 5

int main() {
    int inventory[STORES][SHELVES][PRODUCTS];
    int i, j, k;
    int totalInventory = 0;
    int storeTotals[STORES] = {0};
    int shelfMin[STORES] = {0};
    int minShelfIndex[STORES] = {0};
    int highestStore = 0, maxInventory = 0;
    
    // Initialize random seed
    srand(time(NULL));
    
    // Fill inventory with random quantities (0-50)
    for(i = 0; i < STORES; i++) {
        for(j = 0; j < SHELVES; j++) {
            for(k = 0; k < PRODUCTS; k++) {
                inventory[i][j][k] = rand() % 51; // 0-50 items
            }
        }
    }
    
    // Calculate statistics
    for(i = 0; i < STORES; i++) {
        shelfMin[i] = 9999; // Initialize with high value
        
        for(j = 0; j < SHELVES; j++) {
            int shelfTotal = 0;
            
            for(k = 0; k < PRODUCTS; k++) {
                storeTotals[i] += inventory[i][j][k];
                shelfTotal += inventory[i][j][k];
            }
            
            // Find shelf with minimum stock in this store
            if(shelfTotal < shelfMin[i]) {
                shelfMin[i] = shelfTotal;
                minShelfIndex[i] = j;
            }
        }
        
        totalInventory += storeTotals[i];
        
        // Find store with highest inventory
        if(storeTotals[i] > maxInventory) {
            maxInventory = storeTotals[i];
            highestStore = i;
        }
    }
    
    // Display results
    printf("=== Inventory Analysis ===\n");
    printf("Total products across all stores: %d\n", totalInventory);
    printf("Store with highest inventory: Store %d (%d items)\n", highestStore + 1, storeTotals[highestStore]);
    
    printf("Lowest stock per store:\n");
    for(i = 0; i < STORES; i++) {
        printf("- Store %d: Shelf %d (%d items)\n", i + 1, minShelfIndex[i] + 1, shelfMin[i]);
    }
    
    printf("\nOut of stock alerts:\n");
    for(i = 0; i < STORES; i++) {
        for(j = 0; j < SHELVES; j++) {
            for(k = 0; k < PRODUCTS; k++) {
                if(inventory[i][j][k] == 0) {
                    printf("- Store %d, Shelf %d, Product %d: 0 items\n", i + 1, j + 1, k + 1);
                }
            }
        }
    }
    
    return 0;
}