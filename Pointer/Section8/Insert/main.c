#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *insert(void *srcArr, int sizeArr, int idx, void *src, int size) {
    void *temp = malloc(sizeArr + size);
    if(idx == 0) {
        memcpy(temp, src, size);
        memcpy(temp + size, srcArr, sizeArr);
        return temp;
    }

    memcpy(temp, srcArr, idx*size);
    memcpy(temp + idx*size, src, size);
    memcpy(temp + idx*size + size, );
}

void displayArr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int *srcArr = (int *)malloc(sizeof(int) * 4);
    int a = 5;
    for(int i = 0; i < 4; i++) {
        srcArr[i] = i;
    }
    srcArr = insert(srcArr, sizeof(int) * 4, 0, &a, 4);
    
    displayArr(srcArr, 5);

    return 0;
}