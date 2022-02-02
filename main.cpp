#include <stdio.h>


#define NUM_ASSIGNMENTS 5

int determineTotalPoints(int* points, int size);

int dropLowest(int* points, int size);

int main() {
    printf("Grade Calculator\n");
    printf("================\n");
    printf("This program will calculate your grade average on your assignments.\n");
    printf("Your lowest grade will be dropped.\n");
    int points[NUM_ASSIGNMENTS];
    for( int i = 0; i < NUM_ASSIGNMENTS; i++ ) {
        printf("Enter points for assignment %d: ", i+1);
        scanf("%d", &points[i]);
    }
    int numKeptAssignments = dropLowest(points, NUM_ASSIGNMENTS);
    int totalPoints = determineTotalPoints(points, numKeptAssignments);
    printf("Total points: %d\n", totalPoints);
    printf("Average Points: %.2f\n", (float)totalPoints / numKeptAssignments);
    return 0;
}

int dropLowest(int* points, int size) {
    int lowest = points[0];
    int lowestIndex = 0;
    for( int i = 0; i < size; i++ ) {
        if( points[i] < lowest ) {
            lowest = points[i];
            lowestIndex = i;
        }
    }
    for( int i = lowestIndex; i < size-1; i++ ) {
        points[i] = points[i+1];
    }
    return size - 1;
}


int determineTotalPoints(int* points, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += points[i];
    }
    return total;
}
