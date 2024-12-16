#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *createArray(int size) {
    int *arr = (int *)malloc(size * sizeof(int));
    
    if(!arr)
        return NULL;

    return arr;
}

void initArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) = i;
    }
}

void displayArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int doubleArraySize(int **arr, int size) {
    int *temp = realloc(*arr, 2 * size * sizeof(int));
    if(!temp)
        return -1;
    
    *arr = temp;
    for(int i = size; i < 2 * size; i++) {
        *(*arr + i) = 0;
    }

    return 2 * size;
}

void freeMemory(int* arr) {
    free(arr);
}

int main() {
    int size = 10;
    int* arr = createArray(size);
    if (arr == NULL) return 1; // Check for NULL pointer and exit if necessary

    initArray(arr, size);
    printf("Initial array: ");
    displayArray(arr, size);

    size = doubleArraySize(&arr, size);
    if (size == -1) { // Check if realloc failed
        free(arr); // Make sure to free previously allocated memory
        return 1; // Exit the program
    }

    printf("After doubling: ");
    displayArray(arr, size);

    freeMemory(arr);
    return 0;
}
