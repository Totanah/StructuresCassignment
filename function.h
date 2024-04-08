#ifndef FUNCTION_H
#define FUNCTION_H

struct Music {
    char genre[50];
    char artist[100];
    int year;
    char album[100];
    float duration;
};

void populateMusic(struct Music *musicArray, int arraySize);
void printMusic(struct Music *musicArray, int arraySize);

#endif

