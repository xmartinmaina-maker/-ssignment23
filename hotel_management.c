/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: Program to manage hotel data using arrays.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Part 1: 1D Array – Weekly Revenue Tracker
    printf("--- Weekly Revenue Tracker ---\n");
    double revenue[7];
    double totalRevenue = 0.0;

    // Input revenue for each day
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        totalRevenue += revenue[i];
    }

    // Calculate and display total and average revenue
    double averageRevenue = totalRevenue / 7.0;
    printf("\nTotal weekly revenue: KSh. %.2f\n", totalRevenue);
    printf("Average daily revenue: KSh. %.2f\n", averageRevenue);
    printf("------------------------------------\n\n");

    // Part 2: 2D Array – Room Occupancy (One Branch)
    printf("--- Room Occupancy (One Branch) ---\n");
    int occupancy[5][10];

    // Simulate and display occupancy data per floor
    for (int i = 0; i < 5; i++) {
        int occupiedCount = 0;
        int vacantCount = 0;
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // Randomly 0 or 1
            if (occupancy[i][j] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        printf("Floor %d: %d occupied, %d vacant\n", i + 1, occupiedCount, vacantCount);
    }
    printf("------------------------------------\n\n");

    // Part 3: 3D Array – Multiple Branches
    printf("--- Room Occupancy (Multiple Branches) ---\n");
    int chain[3][5][10];
    int totalOccupied = 0;

    // Assign random occupancy and calculate total occupied rooms
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display the total number of occupied rooms
    printf("Total occupied rooms across all 3 branches: %d\n", totalOccupied);
    printf("------------------------------------\n");

    return 0;
}
