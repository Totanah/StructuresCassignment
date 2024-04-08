#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateMusic(struct Music *musicArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Music %d:\n", i + 1);
        printf("Genre: ");
        scanf("%s", musicArray[i].genre); 
        printf("Artist: ");
        scanf("%s", musicArray[i].artist); 
        printf("Year: ");
        scanf("%d", &musicArray[i].year);
        printf("Album: ");
        scanf("%s", musicArray[i].album); 
        printf("Duration (in minutes): ");
        scanf("%f", &musicArray[i].duration);
    }
}

// Function to print the structure elements
void printMusic(struct Music *musicArray, int arraySize) {
    printf("\nMusic Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Music %d:\n", i + 1);
        printf("Genre: %s\n", musicArray[i].genre);
        printf("Artist: %s\n", musicArray[i].artist);
        printf("Year: %d\n", musicArray[i].year);
        printf("Album: %s\n", musicArray[i].album);
        printf("Duration: %.2f minutes\n", musicArray[i].duration);
    }
}

