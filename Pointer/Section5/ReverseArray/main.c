#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericSwap(void *a, void *b, int size) {
    void *tempMemory = malloc(size);
    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);
    free(tempMemory);
}

void reverseArrIterative(void *arr, int size, int length) {
    for(int i = 0; i < length/2; i++) {
        genericSwap(arr + i*size, arr + (length - 1)*size - i*size, size);
    }    
}

void reverseArrRecursive(void *arr, int size, int length) {
    if(length > 1) {
        genericSwap(arr, arr + (length - 1)*size, size);
        reverseArrRecursive(arr + size, size, length - 2);
    }
}

int main()
{
    char arr[] =  {'a','b','c','d','e'};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before reverse: ");
    for(int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }

    reverseArrRecursive(arr, sizeof(arr[0]), size);
    
    printf("\nAfter reverse: ");
    for(int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}