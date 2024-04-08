#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 2; // Change this if you want a different size
    struct Music musicArray[arraySize];

    // Populate the structure array
    populateMusic(musicArray, arraySize);

    // Print the structure elements
    printMusic(musicArray, arraySize);

    return 0;
}

